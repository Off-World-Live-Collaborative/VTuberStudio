#include "Chat/TwitchChatSender/ChatSenderAuthorizedState.h"

#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "Chat/TwitchChatMessage.h"
#include "Chat/TwitchChatSender/TwitchChatSender.h"

void ChatSenderAuthorizedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchChatSender*>(StateMachine);

	FSM->GetWorldTimerManager().SetTimer(ChatTimerHandle, FSM, &ATwitchChatSender::OnNextMessage, 1.0f, true);
}

void ChatSenderAuthorizedState::OnMessage(const FString& Message)
{
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("%s"), *Message);
	
	// Parse Message
	FTwitchChatMessage ChatMessage(Message);

	// Check for Ping messages
	// TODO: handled by WebSocket client library already?
	if (ChatMessage.Command == "PING")
	{
		FSM->WebSocket->Send(TEXT("PONG :tmi.twitch.tv"));
	}

	// TODO: Check for Keepalive message within keepalive_timeout_seconds

	// TODO: Reconnect message
}

void ChatSenderAuthorizedState::ExitState()
{
	FSM->GetWorldTimerManager().ClearTimer(ChatTimerHandle);
	FSM = nullptr;
}
