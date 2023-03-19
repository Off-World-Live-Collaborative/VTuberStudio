// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/Texture2D.h"
#include "OWLWatermark.generated.h"

/**
 *
 */
UCLASS()
class LIVESTREAMINGTOOLKIT_API UOWLWatermark : public USceneComponent
{
	GENERATED_BODY()

public:
	virtual void OnRegister() override;

	void Apply(UTextureRenderTarget2D* RT);
	static void UpdateImageArray(UTexture2D* Texture);
	void Apply_RenderThread(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* RT);
	void Apply_RenderThread(FRHICommandListImmediate& RHICmdList, FTexture2DRHIRef RT);

private:
	UPROPERTY(Transient)
	UTextureRenderTarget2D* TextureTarget = nullptr;

private:

	UTexture2D* CreateImageTexture();
	void CopyTextureToRenderTargetTexture(UTexture* SourceTexture, UTextureRenderTarget2D* RenderTargetTexture,
		ERHIFeatureLevel::Type FeatureLevel);
};
