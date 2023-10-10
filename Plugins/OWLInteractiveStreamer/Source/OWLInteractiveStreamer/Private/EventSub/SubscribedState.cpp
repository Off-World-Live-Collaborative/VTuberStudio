#include "EventSub/SubscribedState.h"

#include "OWLInteractiveStreamer.h"
#include "EventSub/TwitchEventSubManager.h"
#include "EventSub/TwitchEventSubMessage.h"
#include "EventSub/TwitchEventSubStructs.h"

void SubscribedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchEventSubManager*>(StateMachine);
}

void SubscribedState::OnMessage(const FString& Message)
{
	// Parse Message
	const FTwitchEventSubMessage Msg(Message);

	// Ignoring session_keepalive for now
	// Subscribed event notification
	if (Msg.MessageType == "notification")
	{
		// UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("EventSub Subscription notification for %s received!"), *Msg.SubscriptionType);

		TSharedPtr<FJsonObject> RetJsonObject;
		if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(Msg.Event.RawEvent), RetJsonObject)) return;

		switch (Msg.GetMessageTypeEnum())
		{
		case ETwitchEventSubSubscriptionType::None: break;
		case ETwitchEventSubSubscriptionType::Follow:
			{
				FTwitchEventSubUserDetail User;
				if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) User.UserId = Id;
				if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) User.UserLogin = Login;
				if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) User.UserName = Name;
				FSM->TwitchFollowReceived(User);
				
				break;
			}
		case ETwitchEventSubSubscriptionType::Subscribe:
			{
				FTwitchEventSubSubscriptionDetail Subscription;
				if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) Subscription.UserId = Id;
				if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) Subscription.UserLogin = Login;
				if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) Subscription.UserName = Name;
				if (FString Tier; RetJsonObject->TryGetStringField("tier", Tier)) Subscription.Tier = Tier;
				if (bool bIsGifted; RetJsonObject->TryGetBoolField("is_gift", bIsGifted)) Subscription.bIsGifted = bIsGifted;
				FSM->TwitchNewSubscriptionReceived(Subscription);
				
				break;
			}
		case ETwitchEventSubSubscriptionType::Resubscribe:
			{
				FTwitchEventSubResubscriptionDetail Resubscription;
				if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) Resubscription.UserId = Id;
				if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) Resubscription.UserLogin = Login;
				if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) Resubscription.UserName = Name;
				if (FString Tier; RetJsonObject->TryGetStringField("tier", Tier)) Resubscription.Tier = Tier;
				if (int Cumu; RetJsonObject->TryGetNumberField("cumulative_months", Cumu)) Resubscription.CumulativeMonths = Cumu;             
				if (int Streak; RetJsonObject->TryGetNumberField("streak_months", Streak)) Resubscription.StreakMonths = Streak;             
				if (int Duration; RetJsonObject->TryGetNumberField("duration_months", Duration)) Resubscription.DurationMonths = Duration;             
				if (const TSharedPtr<FJsonObject>* MessageObj; RetJsonObject->TryGetObjectField("message", MessageObj))
				{
					if (FString Text; MessageObj->Get()->TryGetStringField("text", Text))
						Resubscription.Message = Text;
				}
				FSM->TwitchResubscriptionReceived(Resubscription);
				
				break;
			}
		case ETwitchEventSubSubscriptionType::Gift:
			{
				FTwitchEventSubGiftDetail Gift;
				if (bool IsAnon; RetJsonObject->TryGetBoolField("is_anonymous", IsAnon)) Gift.bIsAnonymous = IsAnon;
				if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) Gift.UserId = Id;
				if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) Gift.UserLogin = Login;
				if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) Gift.UserName = Name;
				if (FString Tier; RetJsonObject->TryGetStringField("tier", Tier)) Gift.Tier = Tier;
				if (int Total; RetJsonObject->TryGetNumberField("total", Total)) Gift.Total = Total;             
				if (int Cumu; RetJsonObject->TryGetNumberField("cumulative_total", Cumu)) Gift.CumulativeTotal = Cumu;             
				FSM->TwitchGiftReceived(Gift);
				
				break;
			}
		case ETwitchEventSubSubscriptionType::Cheer:
			{
				FTwitchEventSubCheerDetail Cheer;
				if (bool IsAnon; RetJsonObject->TryGetBoolField("is_anonymous", IsAnon)) Cheer.bIsAnonymous = IsAnon;
				if (!Cheer.bIsAnonymous)
				{
					if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) Cheer.UserId = Id;
					if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) Cheer.UserLogin = Login;
					if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) Cheer.UserName = Name;
				}
				if (FString Text; RetJsonObject->TryGetStringField("message", Text)) Cheer.Message = Text;             
				if (int Bits; RetJsonObject->TryGetNumberField("bits", Bits)) Cheer.Bits = Bits;             
				FSM->TwitchCheerReceived(Cheer);
				
				break;
			}
		case ETwitchEventSubSubscriptionType::Raid:
			{
				FTwitchEventSubRaidDetail Raid;
				if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) Raid.UserId = Id;
				if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) Raid.UserLogin = Login;
				if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) Raid.UserName = Name;
				if (int Viewers; RetJsonObject->TryGetNumberField("viewers", Viewers)) Raid.Viewers = Viewers;             
				FSM->TwitchRaidReceived(Raid);
				
				break;
			}
		case ETwitchEventSubSubscriptionType::RedeemChannelPoint:
			{
				FTwitchEventSubRedeemChannelPointDetail Redeemed;
				if (FString Id; RetJsonObject->TryGetStringField("id", Id)) Redeemed.RedemptionId = Id;
				if (FString Id; RetJsonObject->TryGetStringField("user_id", Id)) Redeemed.UserId = Id;
				if (FString Login; RetJsonObject->TryGetStringField("user_login", Login)) Redeemed.UserLogin = Login;
				if (FString Name; RetJsonObject->TryGetStringField("user_name", Name)) Redeemed.UserName = Name;
				if (FString Input; RetJsonObject->TryGetStringField("user_input", Input)) Redeemed.UserInput = Input;
				if (FString Status; RetJsonObject->TryGetStringField("status", Status)) Redeemed.Status = Status;
				if (const TSharedPtr<FJsonObject>* RewardObj; RetJsonObject->TryGetObjectField("reward", RewardObj))
				{
					FTwitchEventSubChannelPointReward Reward;
					if (FString Id; RewardObj->Get()->TryGetStringField("id", Id)) Reward.RewardId = Id;
					if (FString Title; RewardObj->Get()->TryGetStringField("title", Title)) Reward.Title = Title;
					if (int Cost; RewardObj->Get()->TryGetNumberField("cost", Cost)) Reward.Cost = Cost;
					if (FString Prompt; RewardObj->Get()->TryGetStringField("prompt", Prompt)) Reward.Prompt = Prompt;
					Redeemed.Reward = Reward;
				}
				FSM->TwitchChannelPointRedemptionReceived(Redeemed);
				
				break;
			}
		default: ;
		}
	}
	else if (Msg.MessageType == "session_reconnect")
	{
		FSM->ReconnectURL = Msg.Session.ReconnectURL;
		FSM->SetState(Reconnecting);
	}
	else if (Msg.MessageType == "revocation")
	{
		UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("EventSub Subscription to %s revoked!"), *Msg.SubscriptionType);
	}
}

void SubscribedState::ExitState()
{	
	FSM = nullptr;
}
