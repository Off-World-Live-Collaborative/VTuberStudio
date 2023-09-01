#pragma once

class FiniteStateMachine;

class OWLINTERACTIVESTREAMER_API IState
{
public:
	virtual ~IState() = default;
		
	// Called once when entering state
	virtual void EnterState(FiniteStateMachine* StateMachine);

	// Called per tick by state machine
	virtual void TickState(float DeltaSeconds);

	// Called when message is received via websocket
	// TODO: try removing?
	virtual void OnMessage(const FString& Message);
	
	// Called once when exiting state
	virtual void ExitState();
};
