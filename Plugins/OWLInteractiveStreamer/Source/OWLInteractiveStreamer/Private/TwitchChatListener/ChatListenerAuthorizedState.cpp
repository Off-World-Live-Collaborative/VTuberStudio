#include "TwitchChatListener/ChatListenerAuthorizedState.h"

#include "IWebSocket.h"
#include "TwitchChatMessage.h"
#include "TwitchChatListener/TwitchChatListener.h"

void ChatListenerAuthorizedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchChatListener*>(StateMachine);
}

void ChatListenerAuthorizedState::OnMessage(const FString& Message)
{
	// Parse Message
	FTwitchChatMessage ChatMessage(Message);

	// Check for Keepalive messages
	if (ChatMessage.Command == "PING")
	{
		FSM->WebSocket->Send(TEXT("PONG :tmi.twitch.tv"));
	}
	
	// TODO: Queue to handle fast traffic
	
	// Fire Blueprint Event
	FSM->TwitchChatMessageReceived(ChatMessage);
}

void ChatListenerAuthorizedState::ExitState()
{	
	FSM = nullptr;
}
