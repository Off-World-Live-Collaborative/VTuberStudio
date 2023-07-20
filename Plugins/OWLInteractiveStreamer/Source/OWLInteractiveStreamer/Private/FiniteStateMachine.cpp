#include "FiniteStateMachine.h"

#include "IState.h"

void FiniteStateMachine::SetState(uint8 NewState)
{
	if (CurrentState) CurrentState->ExitState();
	
	CurrentState = States.Contains(NewState) ? States[NewState] : nullptr;
	
	if (CurrentState)
	{
		CurrentStateType = NewState;
		CurrentState->EnterState(this);
	}
	else
	{
		// TODO: Error log
	}
}
