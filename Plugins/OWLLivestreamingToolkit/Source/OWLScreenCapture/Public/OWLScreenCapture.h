// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GameFramework/Actor.h"

#include "OWLScreenCapturerOptions.h"

#include "OWLScreenCapture.generated.h"

class FOWLScreenCapturer;
struct FOWLScreenCaptureOptions;

UCLASS()
class OWLSCREENCAPTURE_API AOWLScreenCapture: public AActor
{
	GENERATED_BODY()

public:

	AOWLScreenCapture(const FObjectInitializer& ObjectInitializer);
	~AOWLScreenCapture();

	// TODO: we should probably add an option for disabling the annoying yellow boarder

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OWLScreenCapture, meta =(AllowPrivateAccess = "true", DisplayName="Capture Settings"))
	FOWLScreenCaptureOptions Options;

	virtual void Destroyed() override;

protected:
	virtual void PostRegisterAllComponents() override;
	virtual void PostInitProperties() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const override;
	bool Initialised = false;

	bool StartCapture();
	void StopCapture();

	bool ActiveCursor = false;
private:
	FOWLScreenCapturer* Capturer = nullptr;
};
