#include "EventSub/TwitchEventSubManager.h"

#include "EventSub/SubscribedState.h"
#include "EventSub/ConnectingState.h"
#include "OWLInteractiveStreamer.h"
#include "EventSub/ConnectedState.h"
#include "IWebSocket.h"
#include "EventSub/ReconnectingState.h"
#include "WebSocketsModule.h"

ATwitchEventSubManager::ATwitchEventSubManager()
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);
	
	// Create all state instances
	States.Emplace(Connecting, MakeShared<ConnectingState>());
	States.Emplace(Connected, MakeShared<ConnectedState>());
	States.Emplace(Subscribed, MakeShared<SubscribedState>());
	States.Emplace(Reconnecting, MakeShared<ReconnectingState>());

	// Assign initial state
	FiniteStateMachine::SetState(Connecting);
}
 
void ATwitchEventSubManager::BeginPlay()
{
    Super::BeginPlay();
	
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	ConnectWebSocket("wss://eventsub.wss.twitch.tv/ws");
}

void ATwitchEventSubManager::ConnectWebSocket(const FString& URL)
{
	WebSocket = FWebSocketsModule::Get().CreateWebSocket(URL, TEXT(""));
	WebSocket->OnConnected().AddUObject(this, &ATwitchEventSubManager::OnConnectedHandler);
	WebSocket->OnConnectionError().AddUObject(this, &ATwitchEventSubManager::OnConnectionErrorHandler);
	WebSocket->OnMessage().AddUObject(this, &ATwitchEventSubManager::OnMessageHandler);

	WebSocket->Connect();
}

void ATwitchEventSubManager::OnConnectedHandler()
{
	// Connected, waiting for authorization
	SetState(Connected);
}

void ATwitchEventSubManager::OnConnectionErrorHandler(const FString& Message)
{
	// TODO: Display errors better?
	UE_LOG(LogOWLInteractiveStreamer, Error, TEXT("Failed to connect to wss://eventsub.wss.twitch.tv/ws, with message\n%s"), *Message);
	
	// Reset inputs
	OAuthToken.Empty();
	Channel.Empty();

	// SetState(Unauthorized);
}

void ATwitchEventSubManager::OnMessageHandler(const FString& Message) const
{
	if (CurrentState) CurrentState->OnMessage(Message);
}

void ATwitchEventSubManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (CurrentState) CurrentState->TickState(DeltaSeconds);
}

void ATwitchEventSubManager::BeginDestroy()
{
	// Destroy States? already TSharedPtr tho

	// TODO: maybe need to remove delegates?
	if (WebSocket && WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
	
	Super::BeginDestroy();
}