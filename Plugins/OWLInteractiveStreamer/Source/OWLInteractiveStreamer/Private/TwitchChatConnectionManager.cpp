#include "TwitchChatConnectionManager.h"

#include "AuthorizedState.h"
#include "ConnectingState.h"
#include "IState.h"
#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "UnauthorizedState.h"
#include "WebSocketsModule.h"

ATwitchChatConnectionManager::ATwitchChatConnectionManager()
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);
	
	// Create all state instances
	States.Emplace(Connecting, MakeShared<ConnectingState>());
	States.Emplace(Unauthorized, MakeShared<UnauthorizedState>());
	States.Emplace(Authorized, MakeShared<AuthorizedState>());

	// Assign initial state
	FiniteStateMachine::SetState(Connecting);
}
 
void ATwitchChatConnectionManager::BeginPlay()
{
    Super::BeginPlay();
	
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(TEXT("wss://irc-ws.chat.twitch.tv"), TEXT(""));
	WebSocket->OnConnected().AddUObject(this, &ATwitchChatConnectionManager::OnConnectedHandler);
	WebSocket->OnConnectionError().AddUObject(this, &ATwitchChatConnectionManager::OnConnectionErrorHandler);
	WebSocket->OnMessage().AddUObject(this, &ATwitchChatConnectionManager::OnMessageHandler);

	WebSocket->Connect();
}

void ATwitchChatConnectionManager::OnConnectedHandler()
{
	// Connected, waiting for authorization
	SetState(Unauthorized);
}

void ATwitchChatConnectionManager::OnConnectionErrorHandler(const FString& Message)
{
	// TODO: Display errors better?
	UE_LOG(LogOWLInteractiveStreamer, Error, TEXT("Failed to connect to wss://irc-ws.chat.twitch.tv, with message\n%s"), *Message);
	
	// Reset inputs
	OAuthToken.Empty();
	Username.Empty();
	Channel.Empty();

	// Retry authorization with new user ninputs
	SetState(Unauthorized);
}

void ATwitchChatConnectionManager::OnMessageHandler(const FString& Message) const
{
	if (CurrentState) CurrentState->OnMessage(Message);
}

void ATwitchChatConnectionManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (CurrentState) CurrentState->TickState(DeltaSeconds);
}

void ATwitchChatConnectionManager::BeginDestroy()
{
	// Destroy States? already TSharedPtr tho

	// TODO: maybe need to remove delegates?
	if (WebSocket && WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
	
	Super::BeginDestroy();
}