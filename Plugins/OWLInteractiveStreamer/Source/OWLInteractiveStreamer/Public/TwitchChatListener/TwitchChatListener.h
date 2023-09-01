#pragma once

#include "CoreMinimal.h"
#include "FiniteStateMachine.h"
#include "IState.h"
#include "GameFramework/Actor.h"
#include "TwitchChatListener.generated.h"

class IWebSocket;
struct FTwitchChatMessage;

namespace TwitchChatListener
{
	enum OWLINTERACTIVESTREAMER_API ETwitchChatListenerStateType : uint8
	{
		Connecting,
		Unauthorized,
		Authorized,
		//Disconnected,
		//Reconnecting
	};
}

// class OWLINTERACTIVESTREAMER_API ITwitchChatListenerState : public IState
// {
// 	// Called when message is received via websocket
// 	virtual void OnMessage(const FString& Message);
// };

UCLASS()
class OWLINTERACTIVESTREAMER_API ATwitchChatListener : public AActor, public FiniteStateMachine
{
	GENERATED_BODY()
	
public:
    ATwitchChatListener();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatListnerSettings)
	TArray<FString> Channels;

	UFUNCTION(BlueprintImplementableEvent)
	void TwitchChatMessageReceived(const FTwitchChatMessage& ChatMessage);
	
	TSharedPtr<IWebSocket> WebSocket;
	
protected:
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	void OnConnectedHandler();
	void OnConnectionErrorHandler(const FString& Message);
	void OnMessageHandler(const FString& Message) const;
};
