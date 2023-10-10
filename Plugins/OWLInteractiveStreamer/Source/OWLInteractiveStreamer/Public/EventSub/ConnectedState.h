#pragma once

#include "IState.h"
#include "HttpModule.h"

enum class ETwitchEventSubSubscriptionType : uint8;
class ATwitchEventSubManager;

class OWLINTERACTIVESTREAMER_API ConnectedState : public IState
{
	ATwitchEventSubManager* FSM = nullptr;
	
	bool bAuthSent = false;
	// TODO: stupid...find a better way to count
	int Counter = 0;

	bool SubscribeToEventSub(ETwitchEventSubSubscriptionType Type) const;
	void OnSubscribeComplete(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bArg) const;

	bool GetUserId(const FString& Name) const;
	void OnGetUserIdComplete(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bArg) const;
	
	FString GetSubscriptionRequestBody(ETwitchEventSubSubscriptionType Type) const;
	FString GetSubscriptionTypeName(ETwitchEventSubSubscriptionType Type) const;
	FString GetSubscriptionTypeVersion(ETwitchEventSubSubscriptionType Type) const;
	TSharedPtr<FJsonObject> GetSubscriptionTypeCondition(ETwitchEventSubSubscriptionType Type) const;
	
public:
	virtual void EnterState(FiniteStateMachine* StateMachine) override;
	virtual void OnMessage(const FString& Message) override;
	virtual void ExitState() override;
};
