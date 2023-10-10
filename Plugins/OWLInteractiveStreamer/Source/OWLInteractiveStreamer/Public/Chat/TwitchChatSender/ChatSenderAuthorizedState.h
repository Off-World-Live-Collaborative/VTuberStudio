#pragma once

#include "IState.h"
#include "TwitchChatSender.h"

class ChatSenderAuthorizedState : public IState
{
	ATwitchChatSender* FSM = nullptr;
	FTimerHandle ChatTimerHandle;

public:
	virtual void EnterState(FiniteStateMachine* StateMachine) override;
	virtual void OnMessage(const FString& Message) override;
	virtual void ExitState() override;

	// UFUNCTION()
	// void OnNextMessage() const;
};
