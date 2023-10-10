#pragma once
#include "IState.h"

class ATwitchEventSubManager;

class OWLINTERACTIVESTREAMER_API SubscribedState : public IState
{
	ATwitchEventSubManager* FSM = nullptr;

public:
	virtual void EnterState(FiniteStateMachine* StateMachine) override;
	virtual void OnMessage(const FString& Message) override;
	virtual void ExitState() override;
};
