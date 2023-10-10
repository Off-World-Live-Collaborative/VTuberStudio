#pragma once

#include "CoreMinimal.h"
#include "FiniteStateMachine.h"
#include "GameFramework/Actor.h"
#include "TwitchEventSubManager.generated.h"

struct FTwitchEventSubGiftDetail;
struct FTwitchEventSubRedeemChannelPointDetail;
struct FTwitchEventSubRaidDetail;
struct FTwitchEventSubCheerDetail;
struct FTwitchEventSubResubscriptionDetail;
struct FTwitchEventSubSubscriptionDetail;
struct FTwitchEventSubUserDetail;
struct FTwitchUser;
class IWebSocket;
struct FTwitchChatMessage;
class IState;

enum OWLINTERACTIVESTREAMER_API ETwitchEventSubConnectionStateType : uint8
{
	Connecting,
	Connected,
	Subscribed,
	//Disconnected,
	Reconnecting
};

UENUM()
enum class ETwitchEventSubSubscriptionType : uint8
{
	None UMETA(Hidden),
	// ChannelUpdate,
	Follow,
	Subscribe,
	Resubscribe,
	Gift,
	Cheer,
	Raid,
	RedeemChannelPoint
};

UCLASS()
class OWLINTERACTIVESTREAMER_API ATwitchEventSubManager : public AActor, public FiniteStateMachine
{
	GENERATED_BODY()
	
public:
    ATwitchEventSubManager();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchEventSubSettings)
	FString OAuthToken;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchEventSubSettings)
	FString Channel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchEventSubSettings)
	TSet<ETwitchEventSubSubscriptionType> EventSubscriptions;

	// TODO: find better way to handle this
	TArray<FString> EventSubscriptionIds;
	
	TSharedPtr<IWebSocket> WebSocket;
	FString SessionId;
	FString ReconnectURL;
	FString ChannelUserId;

	void ConnectWebSocket(const FString& URL);

	/*
	 * Twitch EventSub Blueprint Events
	 * TODO: handled better?
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void TwitchFollowReceived(const FTwitchEventSubUserDetail& User);

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchNewSubscriptionReceived(const FTwitchEventSubSubscriptionDetail& Subscription);

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchResubscriptionReceived(const FTwitchEventSubResubscriptionDetail& Resubscription);

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchGiftReceived(const FTwitchEventSubGiftDetail& Gift);

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchCheerReceived(const FTwitchEventSubCheerDetail& Cheer);

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchRaidReceived(const FTwitchEventSubRaidDetail& Raid);

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchChannelPointRedemptionReceived(const FTwitchEventSubRedeemChannelPointDetail& Event);
	
protected:
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	void OnConnectedHandler();
	void OnConnectionErrorHandler(const FString& Message);
	void OnMessageHandler(const FString& Message) const;
};
