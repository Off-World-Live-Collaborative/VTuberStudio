#pragma once

#include "CoreMinimal.h"
#include "FiniteStateMachine.h"
#include "IState.h"
#include "GameFramework/Actor.h"
#include "TwitchChatSender.generated.h"

class IWebSocket;
struct FTwitchChatMessage;

namespace TwitchChatSender
{
	enum OWLINTERACTIVESTREAMER_API ETwitchChatSenderStateType : uint8
	{
		Connecting,
		Unauthorized,
		Authorized,
		//Disconnected,
		//Reconnecting
	};
}

UCLASS()
class OWLINTERACTIVESTREAMER_API ATwitchChatSender : public AActor, public FiniteStateMachine
{
	GENERATED_BODY()
	
public:
    ATwitchChatSender();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatSenderSettings)
	FString OAuthToken;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatSenderSettings)
	FString Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatSenderSettings)
	TArray<FString> Channels;

	UFUNCTION(BlueprintCallable)
	void SendTwitchChat(const FString& ChatMessage);
	
	TSharedPtr<IWebSocket> WebSocket;
	TQueue<FString> MessageQueue;

	UFUNCTION()
	void OnNextMessage();
	
protected:
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	void OnConnectedHandler();
	void OnConnectionErrorHandler(const FString& Message);
	void OnMessageHandler(const FString& Message) const;
	void OnMessageSentHandler(const FString& Message) const;
};
