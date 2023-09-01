#include "TwitchChatSender/TwitchChatSender.h"

#include "TwitchChatSender/ChatSenderAuthorizedState.h"
#include "TwitchChatSender/ChatSenderUnauthorizedState.h"
#include "ConnectingState.h"
#include "IState.h"
#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "WebSocketsModule.h"

ATwitchChatSender::ATwitchChatSender()
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);
	
	// Create all state instances
	States.Emplace(TwitchChatSender::Connecting, MakeShared<ConnectingState>());
	States.Emplace(TwitchChatSender::Unauthorized, MakeShared<ChatSenderUnauthorizedState>());
	States.Emplace(TwitchChatSender::Authorized, MakeShared<ChatSenderAuthorizedState>());

	// Assign initial state
	FiniteStateMachine::SetState(TwitchChatSender::Connecting);
}

void ATwitchChatSender::BeginPlay()
{
    Super::BeginPlay();
	
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(TEXT("wss://irc-ws.chat.twitch.tv"), TEXT(""));
	WebSocket->OnConnected().AddUObject(this, &ATwitchChatSender::OnConnectedHandler);
	WebSocket->OnConnectionError().AddUObject(this, &ATwitchChatSender::OnConnectionErrorHandler);
	WebSocket->OnMessage().AddUObject(this, &ATwitchChatSender::OnMessageHandler);
	WebSocket->OnMessageSent().AddUObject(this, &ATwitchChatSender::OnMessageSentHandler);

	WebSocket->Connect();
}

void ATwitchChatSender::OnConnectedHandler()
{
	// Connected, waiting for authorization
	SetState(TwitchChatSender::Unauthorized);
}

void ATwitchChatSender::OnConnectionErrorHandler(const FString& Message)
{
	// TODO: Display errors better?
	UE_LOG(LogOWLInteractiveStreamer, Error, TEXT("Failed to connect to wss://irc-ws.chat.twitch.tv, with message\n%s"), *Message);
	
	// Reset inputs
	OAuthToken.Empty();
	Username.Empty();
	Channels.Empty();

	// Retry authorization with new user inputs
	SetState(TwitchChatSender::Unauthorized);
}

void ATwitchChatSender::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (CurrentState) CurrentState->TickState(DeltaSeconds);
}

void ATwitchChatSender::OnMessageHandler(const FString& Message) const
{
	if (CurrentState) CurrentState->OnMessage(Message);
}

void ATwitchChatSender::SendTwitchChat(const FString& ChatMessage)
{
	for (const auto& channel : Channels)
	{
		MessageQueue.Enqueue(FString::Printf(TEXT("PRIVMSG #%s :%s"), *channel, *ChatMessage));
	}
}

void ATwitchChatSender::OnNextMessage()
{
	if (MessageQueue.IsEmpty()) return;
	
	FString message;
	MessageQueue.Dequeue(message);

	if (message.IsEmpty()) return;
	
	UE_LOG(LogOWLInteractiveStreamer, Error, TEXT("In OnNextMessage: Dequeued and sending %s"), *message);

	WebSocket->Send(message);
}

void ATwitchChatSender::OnMessageSentHandler(const FString& Message) const
{
	// UE_LOG(LogOWLInteractiveStreamer, Error, TEXT("Chat Message sent successfully!"));
}

void ATwitchChatSender::BeginDestroy()
{
	// Destroy States? already TSharedPtr tho

	// TODO: maybe need to remove delegates?
	if (WebSocket && WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
	
	Super::BeginDestroy();
}