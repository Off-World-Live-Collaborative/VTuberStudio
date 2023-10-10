#include "Chat/TwitchChatListener/ChatListenerUnauthorizedState.h"

#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "Chat/TwitchChatListener/TwitchChatListener.h"
#include "Chat/TwitchChatMessage.h"

void ChatListenerUnauthorizedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchChatListener*>(StateMachine);
	
	// FPlatformProcess::LaunchURL(TEXT("https://collaborative.offworld.live"), NULL, NULL);
	 
	// UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("WebSocket Client Connected! Waiting on user's authorization token input..."));
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("Twitch Chat Listener Connected!"));
}

void ChatListenerUnauthorizedState::TickState(float DeltaSeconds)
{
	if (bAuthSent || FSM->Channels.IsEmpty()) return;

	// Listen to Channels
	FString channels;
	for (const auto& channel : FSM->Channels)
	{
		if (channel.IsEmpty()) continue;
		channels = channels + ",#" + channel;
	}

	if (channels.IsEmpty()) return;
	channels.RemoveFromStart(",");
	
	FSM->WebSocket->Send(TEXT("CAP REQ :twitch.tv/membership twitch.tv/tags twitch.tv/commands"));

	// Readonly-access
	FSM->WebSocket->Send(FString::Printf(TEXT("NICK justinfan%d"), FMath::RandRange(0, 99999)));
	
	FSM->WebSocket->Send(FString::Printf(TEXT("JOIN %s"), *channels));
	
	bAuthSent = true;
}

void ChatListenerUnauthorizedState::OnMessage(const FString& Message)
{
	// Parse Message
	FTwitchChatMessage ChatMessage(Message);

	if (ChatMessage.Command == "001")
	{
		for (const auto& channel : FSM->Channels)
		{
			UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("You are now listening to %s's Twitch Chat! :)"), *channel);
		}
		
		FSM->SetState(TwitchChatListener::Authorized);
	}
}

void ChatListenerUnauthorizedState::ExitState()
{	
	// Clean up (unnecessary? Should not re-enter this state)
	FSM = nullptr;
	bAuthSent = false;
}
