#include "Chat/TwitchChatListener/TwitchChatListener.h"

#include "Chat/TwitchChatListener/ChatListenerAuthorizedState.h"
#include "Chat/TwitchChatListener/ChatListenerUnauthorizedState.h"
#include "Chat/TwitchChatListener/ChatListenerConnectingState.h"
#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "WebSocketsModule.h"

ATwitchChatListener::ATwitchChatListener()
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);
	
	// Create all state instances
	States.Emplace(TwitchChatListener::Connecting, MakeShared<ChatListenerConnectingState>());
	States.Emplace(TwitchChatListener::Unauthorized, MakeShared<ChatListenerUnauthorizedState>());
	States.Emplace(TwitchChatListener::Authorized, MakeShared<ChatListenerAuthorizedState>());

	// Assign initial state
	FiniteStateMachine::SetState(TwitchChatListener::Connecting);
}
 
void ATwitchChatListener::BeginPlay()
{
    Super::BeginPlay();
	
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(TEXT("wss://irc-ws.chat.twitch.tv"), TEXT(""));
	WebSocket->OnConnected().AddUObject(this, &ATwitchChatListener::OnConnectedHandler);
	WebSocket->OnConnectionError().AddUObject(this, &ATwitchChatListener::OnConnectionErrorHandler);
	WebSocket->OnMessage().AddUObject(this, &ATwitchChatListener::OnMessageHandler);

	WebSocket->Connect();
}

void ATwitchChatListener::OnConnectedHandler()
{
	// Connected, waiting for authorization
	SetState(TwitchChatListener::Unauthorized);
}

void ATwitchChatListener::OnConnectionErrorHandler(const FString& Message)
{
	// TODO: Display errors better?
	UE_LOG(LogOWLInteractiveStreamer, Error, TEXT("Failed to connect to wss://irc-ws.chat.twitch.tv, with message\n%s"), *Message);
	
	// Reset inputs
	Channels.Empty();

	// Retry authorization with new user inputs
	SetState(TwitchChatListener::Unauthorized);
}

void ATwitchChatListener::OnMessageHandler(const FString& Message) const
{
	if (CurrentState) CurrentState->OnMessage(Message);
}

void ATwitchChatListener::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (CurrentState) CurrentState->TickState(DeltaSeconds);
}

void ATwitchChatListener::BeginDestroy()
{
	// Destroy States? already TSharedPtr tho

	// TODO: maybe need to remove delegates?
	if (WebSocket && WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
	
	Super::BeginDestroy();
}