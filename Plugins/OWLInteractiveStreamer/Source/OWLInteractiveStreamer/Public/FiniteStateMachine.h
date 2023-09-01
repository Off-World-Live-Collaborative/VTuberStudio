#pragma once

class IState;

class FiniteStateMachine
{
public:
	virtual ~FiniteStateMachine() = default;

	TMap<uint8, TSharedPtr<IState>> States;
	uint8 CurrentStateType;
	TSharedPtr<IState> CurrentState;

	virtual void SetState(uint8 NewState);
};
