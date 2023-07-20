// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintAsyncActionBase.h"
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Online/HTTP/Public/Interfaces/IHttpRequest.h"
#include "TwitchLoginService.generated.h"

/**
 * 
 */
UCLASS()
class OWLINTERACTIVESTREAMER_API UTwitchLoginService : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UTwitchLoginService* LoginToTwitch();

	virtual void Activate() override;

	void HandleLoginRequest(FHttpRequestPtr request, FHttpResponsePtr response, bool isSuccessful);

private:
};
