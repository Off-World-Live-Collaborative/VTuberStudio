#pragma once

#include "CoreMinimal.h"
#include "FiniteStateMachine.h"
#include "GameFramework/Actor.h"
#include "TwitchChatConnectionManager.generated.h"

class IWebSocket;
struct FTwitchChatMessage;
class IState;

enum OWLINTERACTIVESTREAMER_API ETwitchChatConnectionStateType : uint8
{
	Connecting,
	Unauthorized,
	Authorized,
	//Disconnected,
	//Reconnecting
};

UCLASS()
class OWLINTERACTIVESTREAMER_API ATwitchChatConnectionManager : public AActor, public FiniteStateMachine
{
	GENERATED_BODY()
	
public:
    ATwitchChatConnectionManager();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatConnectionSettings)
	FString OAuthToken;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatConnectionSettings)
	FString Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TwitchChatConnectionSettings)
	FString Channel;

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
