#pragma once

#include "IState.h"

class ATwitchChatConnectionManager;

class UnauthorizedState : public IState
{
	ATwitchChatConnectionManager* FSM = nullptr;
	bool bAuthSent = false;
	
public:
	virtual void EnterState(FiniteStateMachine* StateMachine) override;
	virtual void TickState(float DeltaSeconds) override;
	virtual void OnMessage(const FString& Message) override;
	virtual void ExitState() override;
};
