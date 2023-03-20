#pragma once
#include "CoreMinimal.h"
#include "NDIEnums.h"
#include "CompositingElements/CompositingElementPasses.h"
#include "OWLNDIOutputPass.generated.h"

class FOWLNDISender;
class UOWLWatermark;

UCLASS()
class OWLCOMPOSURE_API UOWLNDIOutputPass : public UCompositingElementOutput
{
	GENERATED_BODY()

	UOWLNDIOutputPass();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="NDI")
	FString SenderName = TEXT("OWL NDI Pass");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	ENDIVideoConversionFormat VideoConversionFormat = ENDIVideoConversionFormat::NDIVCF_BGRA;

public:
	virtual void RelayOutput_Implementation(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	static bool NDIModuleLoaded();

	virtual void BeginDestroy() override;
protected:
	bool bActive = false;
private:
	UPROPERTY()
	UOWLWatermark* Watermark;

	TSharedPtr<FOWLNDISender, ESPMode::ThreadSafe> NDISender = nullptr;
};
