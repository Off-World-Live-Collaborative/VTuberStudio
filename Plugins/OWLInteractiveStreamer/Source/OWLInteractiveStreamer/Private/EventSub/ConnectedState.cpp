#include "EventSub/ConnectedState.h"

#include "OWLInteractiveStreamer.h"
#include "EventSub/TwitchEventSubManager.h"
#include "EventSub/TwitchEventSubMessage.h"
#include "Interfaces/IHttpResponse.h"

void ConnectedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchEventSubManager*>(StateMachine);
	
	FPlatformProcess::LaunchURL(TEXT("https://collaborative.offworld.live"), NULL, NULL);
	 
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("EventSub Connected! Waiting on event subscriptions..."));
}

void ConnectedState::OnMessage(const FString& Message)
{
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("%s"), *Message);

	FTwitchEventSubMessage Parsed(Message);
	
	// Check Welcome Message
	if (Parsed.MessageType == "session_welcome")
	{
		// Cache Session Id
		FSM->SessionId = Parsed.Session.SessionId;

		// Get target channel's userid
		GetUserId(FSM->Channel);
	}
}

bool ConnectedState::GetUserId(const FString& Name) const
{
	const auto HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb(TEXT("GET"));
	HttpRequest->SetURL(FString::Printf(TEXT("https://api.twitch.tv/helix/users?login=%s"), *FSM->Channel));
	HttpRequest->OnProcessRequestComplete().BindRaw(this, &ConnectedState::OnGetUserIdComplete);
	
	HttpRequest->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *FSM->OAuthToken));
	HttpRequest->SetHeader(TEXT("Client-Id"), "c27ufnb754plcjr10uez68huahputt");

	return HttpRequest->ProcessRequest();
}

void ConnectedState::OnGetUserIdComplete(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bArg) const
{
	const auto ResponseStr = Response->GetContentAsString();

	TSharedPtr<FJsonObject> RetJsonObject;
	if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(ResponseStr), RetJsonObject)) return;

	if (const TArray<TSharedPtr<FJsonValue>>* RetData; RetJsonObject->TryGetArrayField("data", RetData))
	{
		const auto JsonObj = RetData->GetData()->Get()->AsObject();
		if (FString Id; JsonObj->TryGetStringField("id", Id))
		{
			// Cache target channel userid
			FSM->ChannelUserId = Id;

			// requesting subscriptions to EventSub
			for (const auto Subscription : FSM->EventSubscriptions)
			{
				SubscribeToEventSub(Subscription);
			}
		}
	}
}

bool ConnectedState::SubscribeToEventSub(ETwitchEventSubSubscriptionType Type) const
{
	const auto HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb(TEXT("POST"));
	HttpRequest->SetURL("https://api.twitch.tv/helix/eventsub/subscriptions");
	HttpRequest->OnProcessRequestComplete().BindRaw(this, &ConnectedState::OnSubscribeComplete);
	
	HttpRequest->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *FSM->OAuthToken));
	HttpRequest->SetHeader(TEXT("Client-Id"), "c27ufnb754plcjr10uez68huahputt");
	HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	
	HttpRequest->SetContentAsString(GetSubscriptionRequestBody(Type));

	return HttpRequest->ProcessRequest();
}

void ConnectedState::OnSubscribeComplete(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bArg) const
{
	const auto ResponseStr = Response->GetContentAsString();
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("%s"), *ResponseStr);
	
	if (Response->GetResponseCode() == 202)
	{
		UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("Twitch EventSub: successfully subsribed with response"));

		// const auto ResponseStr = Response->GetContentAsString();
		//
		// TSharedPtr<FJsonObject> RetJsonObject;
		// if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(ResponseStr), RetJsonObject)) return;
		
		FSM->EventSubscriptionIds.Add("");
	}
	else
	{
		UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("Twitch EventSub: failed to subsribed"));
	}

	if (FSM->EventSubscriptionIds.Num() == FSM->EventSubscriptions.Num())
	{
		FSM->SetState(Subscribed);
	}
}

FString ConnectedState::GetSubscriptionRequestBody(ETwitchEventSubSubscriptionType Type) const
{
	TSharedRef<FJsonObject> Transport = MakeShareable(new FJsonObject());
	Transport->SetStringField("method", "websocket");
	Transport->SetStringField("session_id", FSM->SessionId);

	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField("type", GetSubscriptionTypeName(Type));
	JsonObject->SetStringField("version", GetSubscriptionTypeVersion(Type));
	JsonObject->SetObjectField("condition", GetSubscriptionTypeCondition(Type));
	JsonObject->SetObjectField("transport", Transport);

	FString JsonString;
	if (!FJsonSerializer::Serialize(JsonObject, TJsonWriterFactory<>::Create(&JsonString)))
	{
		UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("Failed to serialize HTTP request body for %s"), *GetSubscriptionTypeName(Type));
	}

	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("%s"), *JsonString);
	
	return JsonString;
}

FString ConnectedState::GetSubscriptionTypeName(ETwitchEventSubSubscriptionType Type) const
{
	switch (Type)
	{
	case ETwitchEventSubSubscriptionType::Follow: return "channel.follow";
	case ETwitchEventSubSubscriptionType::Subscribe: return "channel.subscribe";
	case ETwitchEventSubSubscriptionType::Resubscribe: return "channel.subscription.message";
	case ETwitchEventSubSubscriptionType::Gift: return "channel.subscription.gift";
	case ETwitchEventSubSubscriptionType::Cheer: return "channel.cheer";
	case ETwitchEventSubSubscriptionType::Raid: return "channel.raid";
	case ETwitchEventSubSubscriptionType::RedeemChannelPoint: return "channel.channel_points_custom_reward_redemption.add";
	default: return "";
	}
}

FString ConnectedState::GetSubscriptionTypeVersion(ETwitchEventSubSubscriptionType Type) const
{
	switch (Type)
	{
	case ETwitchEventSubSubscriptionType::Follow: return "2";
	case ETwitchEventSubSubscriptionType::Subscribe: return "1";
	case ETwitchEventSubSubscriptionType::Resubscribe: return "1";
	case ETwitchEventSubSubscriptionType::Gift: return "1";
	case ETwitchEventSubSubscriptionType::Cheer: return "1";
	case ETwitchEventSubSubscriptionType::Raid: return "1";
	case ETwitchEventSubSubscriptionType::RedeemChannelPoint: return "1";
	default: return "";
	}
}

TSharedPtr<FJsonObject> ConnectedState::GetSubscriptionTypeCondition(ETwitchEventSubSubscriptionType Type) const
{
	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	switch (Type)
	{
	case ETwitchEventSubSubscriptionType::Follow:
		JsonObject->SetStringField("broadcaster_user_id", FSM->ChannelUserId);
		JsonObject->SetStringField("moderator_user_id", FSM->ChannelUserId);
		break;
	case ETwitchEventSubSubscriptionType::Subscribe:
		JsonObject->SetStringField("broadcaster_user_id", FSM->ChannelUserId);
		break;
	case ETwitchEventSubSubscriptionType::Resubscribe:
		JsonObject->SetStringField("broadcaster_user_id", FSM->ChannelUserId);
		break;
	case ETwitchEventSubSubscriptionType::Gift:
		JsonObject->SetStringField("broadcaster_user_id", FSM->ChannelUserId);
		break;
	case ETwitchEventSubSubscriptionType::Cheer:
		JsonObject->SetStringField("broadcaster_user_id", FSM->ChannelUserId);
		break;
	case ETwitchEventSubSubscriptionType::Raid:
		// ANY raids TOWARDS target channel
		JsonObject->SetStringField("to_broadcaster_user_id", FSM->ChannelUserId);
		break;
	case ETwitchEventSubSubscriptionType::RedeemChannelPoint:
		JsonObject->SetStringField("broadcaster_user_id", FSM->ChannelUserId);
		break;
	default: ;
	}
	
	return JsonObject;
}

void ConnectedState::ExitState()
{	
	// Clean up (unnecessary? Should not re-enter this state)
	FSM = nullptr;
	bAuthSent = false;
}
