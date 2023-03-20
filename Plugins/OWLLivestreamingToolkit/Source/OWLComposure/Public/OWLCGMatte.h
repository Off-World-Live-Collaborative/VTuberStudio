#pragma once

#include "CoreMinimal.h"
#include "OWLCGElement.h"

#include "OWLCGMatte.generated.h"

UCLASS(BlueprintType, Category="OWL Composure")
class AOWLCGMatte : public AOWLCGElement
{
	GENERATED_BODY()
public:
	AOWLCGMatte(const FObjectInitializer& ObjectInitializer);
};
