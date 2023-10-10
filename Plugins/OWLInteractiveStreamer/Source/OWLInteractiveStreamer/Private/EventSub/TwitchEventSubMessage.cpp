#include "EventSub/TwitchEventSubMessage.h"

#include "EventSub/TwitchEventSubManager.h"

FTwitchEventSubMessage::FTwitchEventSubMessage(const FString& Message)
{
	ParseMessage(Message);
}

void FTwitchEventSubMessage::ParseMessage(const FString& Msg)
{
	TSharedPtr<FJsonObject> RetJsonObject;
	
	if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(Msg), RetJsonObject)) return;

	const TSharedPtr<FJsonObject>* RetMetaData;
	if (RetJsonObject->TryGetObjectField("metadata", RetMetaData))
	{
		ParseMetaData(RetMetaData->Get());
	}

	const TSharedPtr<FJsonObject>* RetPayload;
	if (RetJsonObject->TryGetObjectField("payload", RetPayload))
	{
		ParsePayload(RetPayload->Get());
	}
}

void FTwitchEventSubMessage::ParseMetaData(const FJsonObject* MetaData)
{
	if (FString Id; MetaData->TryGetStringField("message_id", Id))
	{
		MessageID = Id;
	}

	if (FString Type; MetaData->TryGetStringField("message_type", Type))
	{
		MessageType = Type;
	}

	if (FString TimeStamp; MetaData->TryGetStringField("message_timestamp", TimeStamp))
	{
		MessageTimeStamp = TimeStamp;
	}

	if (FString Type; MetaData->TryGetStringField("subscription_type", Type))
	{
		SubscriptionType = Type;
	}

	if (FString Version; MetaData->TryGetStringField("subscription_version", Version))
	{
		SubscriptionVersion = Version;
	}
}

void FTwitchEventSubMessage::ParsePayload(const FJsonObject* Payload)
{
	if (const TSharedPtr<FJsonObject>* subscription; Payload->TryGetObjectField("subscription", subscription))
	{
		if (FString Id; subscription->Get()->TryGetStringField("id", Id))
		{
			this->Subscription.Id = Id;
		}
	}

	if (const TSharedPtr<FJsonObject>* event; Payload->TryGetObjectField("event", event))
	{
		FString Content;
		TSharedRef< TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Content);
		FJsonSerializer::Serialize(event->ToSharedRef(), Writer);
		this->Event.RawEvent = Content;
	}

	if (const TSharedPtr<FJsonObject>* session; Payload->TryGetObjectField("session", session))
	{
		if (FString Id; session->Get()->TryGetStringField("id", Id))
		{
			this->Session.SessionId = Id;
		}

		if (FString Status; session->Get()->TryGetStringField("status", Status))
		{
			this->Session.SessionStatus = Status;
		}

		if (int Seconds; session->Get()->TryGetNumberField("keepalive_timeout_seconds", Seconds))
		{
			this->Session.KeepAliveTimeoutSeconds = Seconds;
		}

		if (FString URL; session->Get()->TryGetStringField("reconnect_url", URL))
		{
			this->Session.ReconnectURL = URL;
		}

		if (FString Time; session->Get()->TryGetStringField("connected_at", Time))
		{
			this->Session.ConnectedAt = Time;
		}
	}
}

ETwitchEventSubSubscriptionType FTwitchEventSubMessage::GetMessageTypeEnum() const
{
	if (SubscriptionType == "channel.follow") return ETwitchEventSubSubscriptionType::Follow;
	if (SubscriptionType == "channel.subscribe") return ETwitchEventSubSubscriptionType::Subscribe;
	if (SubscriptionType == "channel.subscription.message") return ETwitchEventSubSubscriptionType::Resubscribe;
	if (SubscriptionType == "channel.subscription.gift") return ETwitchEventSubSubscriptionType::Gift;
	if (SubscriptionType == "channel.cheer") return ETwitchEventSubSubscriptionType::Cheer;
	if (SubscriptionType == "channel.raid") return ETwitchEventSubSubscriptionType::Raid;
	if (SubscriptionType == "channel.channel_points_custom_reward_redemption.add") return ETwitchEventSubSubscriptionType::RedeemChannelPoint;
	return ETwitchEventSubSubscriptionType::None;
}


