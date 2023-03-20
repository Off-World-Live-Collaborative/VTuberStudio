#pragma once

#include "CoreMinimal.h"
#include "OWLSpoutReceiverManager.h"
#include "CompositingElements/CompositingElementPasses.h"

#include "OWLSpoutInputPass.generated.h"

class UOWLWatermark;

UCLASS(Blueprintable)
class OWLCOMPOSURE_API UOWLSpoutInputPass : public UCompositingElementInput
{
	GENERATED_BODY()

	UOWLSpoutInputPass();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OWL")
	FOWLSpoutReceiverInterface Receiver;

	virtual UTexture* GenerateInput_Implementation() override;

protected:
	UOWLWatermark* Watermark = nullptr;
private:
	void Receive();

};
