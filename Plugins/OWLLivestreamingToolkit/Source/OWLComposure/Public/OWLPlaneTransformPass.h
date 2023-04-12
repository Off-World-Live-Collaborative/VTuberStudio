// Copyright Off World Live Limited 2023

#pragma once

#include "CoreMinimal.h"
#include "OWLVideoPlaneShader.h"
#include "VideoPlanePlacement.h"
#include "CompositingElements/CompositingElementPasses.h"
#include "CompositingElements/CompositingMaterialPass.h"
#include "Camera/CameraActor.h"
#include "Engine/StaticMeshActor.h"
#include "OWLPlaneTransformPass.generated.h"

class ACameraActor;
class UTexture;
class UComposurePostProcessingPassProxy;

struct FTransformParameterBackBuffer
{
	int Size = 0;
	int LastReadIndex = 0;
	int InitialFillCount = -1;
	int LastWriteIndex = -1;
	int FramesBehind = 0;
	TArray<FOWLVideoPlaneDistortParams> Data;

	void Init(int Size, int FramesBehind);

	void Add(FOWLVideoPlaneDistortParams Params);
	bool Read(FOWLVideoPlaneDistortParams &Output);
};
/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class OWLCOMPOSURE_API UOWLPlaneTransformPass : public UCompositingElementTransform
{
	GENERATED_BODY()

public:
	UOWLPlaneTransformPass();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	float RenderScale = 1.f;

	/* Set a plane to attach the media plate to in the scene - will take aspect ratio from scale */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	AOWLVideoPlanePlacement* Plane = nullptr;

	/* Set a reference to a camera actor in the scene instead of using the camera inherited from the Composure pass */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	ACameraActor* CameraOverride = nullptr;

	/* Increase from 0 to soften edges of video */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled", ClampMin="0", ClampMax="0.05", UIMin="0", UIMax="0.05"))
	float EdgeBlur = 0.008;

	/* Number of frames to run behind. By default, with deferred rendering this is 1 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled", UIMin=0, UIMax=10, ClampMin=0, ClampMax=10))
	int FrameDelay = 0;


protected:
	virtual UTexture* ApplyTransform_Implementation(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera) override;
	virtual void PostInitProperties() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	bool GetCurrentParams(ACameraActor* TargetCamera, FOWLVideoPlaneDistortParams& OutParams);
	void SetPlaneParameters(ACameraActor* TargetCamera, FOWLVideoPlaneDistortParams& Params);
	void SetCameraParameters(ACameraActor* TargetCamera, FOWLVideoPlaneDistortParams& Params);
	TArray<FVector> CameraLocations;
	TArray<FRotator> CameraRotations;
	FTransformParameterBackBuffer BackBuffer;
};