#include "EventSub/ReconnectingState.h"

#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "EventSub/TwitchEventSubManager.h"
#include "EventSub/TwitchEventSubMessage.h"

void ReconnectingState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchEventSubManager*>(StateMachine);

	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("In ReconnectingState"));

	// Keep reference of old websocket
	const TSharedPtr<IWebSocket> WebSocket = FSM->WebSocket;
		
	// Create new websocket
	FSM->ConnectWebSocket(FSM->ReconnectURL);
		
	// Close old websocket
	WebSocket->Close();
}

void ReconnectingState::OnMessage(const FString& Message)
{
	if (const FTwitchEventSubMessage Msg(Message); Msg.MessageType == "session_welcome")
	{
		// Reconnected!
		FSM->SetState(Subscribed);
	}
}

void ReconnectingState::ExitState()
{	
	FSM = nullptr;
}
