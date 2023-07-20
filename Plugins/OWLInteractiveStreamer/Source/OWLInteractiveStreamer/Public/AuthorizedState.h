#pragma once
#include "IState.h"

class ATwitchChatConnectionManager;

class OWLINTERACTIVESTREAMER_API AuthorizedState : public IState
{
	ATwitchChatConnectionManager* FSM = nullptr;

public:
	virtual void EnterState(FiniteStateMachine* StateMachine) override;
	virtual void OnMessage(const FString& Message) override;
	virtual void ExitState() override;
};
