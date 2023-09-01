#include "TwitchChatSender/ChatSenderAuthorizedState.h"

#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "TwitchChatMessage.h"
#include "TwitchChatSender/TwitchChatSender.h"

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

	// Check for Keepalive messages
	if (ChatMessage.Command == "PING")
	{
		FSM->WebSocket->Send(TEXT("PONG :tmi.twitch.tv"));
	}
}

void ChatSenderAuthorizedState::ExitState()
{
	FSM->GetWorldTimerManager().ClearTimer(ChatTimerHandle);
	FSM = nullptr;
}
