#include "TwitchChatSender/ChatSenderUnauthorizedState.h"

#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "TwitchChatSender/TwitchChatSender.h"
#include "TwitchChatMessage.h"

void ChatSenderUnauthorizedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchChatSender*>(StateMachine);
	
	FPlatformProcess::LaunchURL(TEXT("https://collaborative.offworld.live"), NULL, NULL);
	 
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("Twitch Chat Sender Connected! Waiting on user's authorization token input..."));
}

void ChatSenderUnauthorizedState::TickState(float DeltaSeconds)
{
	if (bAuthSent || FSM->OAuthToken.IsEmpty() || FSM->Username.IsEmpty() || FSM->Channels.IsEmpty()) return;

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
	FSM->WebSocket->Send(FString::Printf(TEXT("PASS oauth:%s"), *FSM->OAuthToken));
	FSM->WebSocket->Send(FString::Printf(TEXT("NICK %s"), *FSM->Username));
	FSM->WebSocket->Send(FString::Printf(TEXT("JOIN %s"), *channels));
	
	bAuthSent = true;
}

void ChatSenderUnauthorizedState::OnMessage(const FString& Message)
{
	// Parse Message
	FTwitchChatMessage ChatMessage(Message);

	if (ChatMessage.Command == "001")
	{
		for (const auto& channel : FSM->Channels)
		{
			UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("You are now connected to %s's Twitch Chat! :)"), *channel);
		}
		
		FSM->SetState(TwitchChatSender::Authorized);
	}
}

void ChatSenderUnauthorizedState::ExitState()
{	
	// Clean up (unnecessary? Should not re-enter this state)
	FSM = nullptr;
	bAuthSent = false;
}
