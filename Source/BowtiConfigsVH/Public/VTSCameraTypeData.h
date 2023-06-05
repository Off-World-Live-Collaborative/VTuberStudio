// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VTSCameraTypeData.generated.h"

class UTextureRenderTarget2D;
class AOWLViewportCapture;
class AOWLCineCamCapture;
class AOWL360CamCapture;

UENUM(BlueprintType)
enum class EOWLCameraType : uint8
{
	E_VIEWPORT UMETA(DisplayName = "Viewport Capture"),
	E_CINECAM UMETA(DisplayName = "Cinecam Capture"),
	E_CINECAM_CHARACTER UMETA(DisplayName = "Cinecam Capture (Character)"),
	E_360 UMETA(DisplayName = "360 Capture"),
	E_360_CHARACTER UMETA(DisplayName = "360 Capture (Character)"),
};

USTRUCT(BlueprintType)
struct FVTSCameraTypeData
{
	GENERATED_BODY()

public:
	FVTSCameraTypeData();

	/* Type of OWL Camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cameras")
	EOWLCameraType CameraType = EOWLCameraType::E_VIEWPORT;

	/* Select a viewport camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cameras", meta = (EditCondition = "CameraType==EOWLCameraType::E_VIEWPORT", EditConditionHides))
	AOWLViewportCapture* ViewportCapture = nullptr;

	/* Select a cinecam camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cameras", meta = (EditCondition = "CameraType==EOWLCameraType::E_CINECAM||CameraType==EOWLCameraType::E_CINECAM_CHARACTER", EditConditionHides))
	AOWLCineCamCapture* CinecamCapture = nullptr;

	/* Select a 360 camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cameras", meta = (EditCondition = "CameraType==EOWLCameraType::E_360||CameraType==EOWLCameraType::E_360_CHARACTER", EditConditionHides))
	AOWL360CamCapture* ThreeSixtyCapture = nullptr;

	/* Render target that receives camera outputs */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Render Target", MakeStructureDefaultValue = "None"))
	UTextureRenderTarget2D* RenderTarget;

	/** Material instance for displaying camera outputs */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Output Material", MakeStructureDefaultValue = "None"))
	UMaterialInterface* OutputMaterial;

protected:
};
