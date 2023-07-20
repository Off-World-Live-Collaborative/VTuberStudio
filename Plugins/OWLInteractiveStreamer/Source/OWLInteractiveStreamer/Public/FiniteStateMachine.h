#pragma once

class IState;

class OWLINTERACTIVESTREAMER_API FiniteStateMachine
{
public:
	// FiniteStateMachine();
	virtual ~FiniteStateMachine() = default;

	TMap<uint8, TSharedPtr<IState>> States;
	uint8 CurrentStateType;
	TSharedPtr<IState> CurrentState;

	// virtual void InitializeFSM(uint8 NewState);
	virtual void SetState(uint8 NewState);
};
