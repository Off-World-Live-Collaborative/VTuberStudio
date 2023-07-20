#include "AuthorizedState.h"

#include "OWLInteractiveStreamer.h"
#include "TwitchChatConnectionManager.h"
#include "TwitchChatMessage.h"

void AuthorizedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchChatConnectionManager*>(StateMachine);

	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("In AuthorizedState"));
}

void AuthorizedState::OnMessage(const FString& Message)
{
	// Parse Message
	FTwitchChatMessage ChatMessage(Message);

	// TODO: filter out non-message maybe? expose a list of commands user want to include that trigger following event
	// Fire Blueprint Event
	FSM->TwitchChatMessageReceived(ChatMessage);
}

void AuthorizedState::ExitState()
{	
	FSM = nullptr;
}
