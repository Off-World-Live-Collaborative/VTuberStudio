#pragma once

#include "IState.h"
#include "TwitchChatListener.h"

class ChatListenerAuthorizedState : public IState
{
	ATwitchChatListener* FSM = nullptr;

public:
	virtual void EnterState(FiniteStateMachine* StateMachine) override;
	virtual void OnMessage(const FString& Message) override;
	virtual void ExitState() override;
};
