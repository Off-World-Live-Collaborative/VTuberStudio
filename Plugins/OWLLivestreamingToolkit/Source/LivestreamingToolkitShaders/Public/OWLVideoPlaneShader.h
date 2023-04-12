#pragma once
#include "CoreMinimal.h"

class UTextureRenderTarget2D;
class UTexture;

struct FOWLVideoPlaneDistortParams
{
	FVector3f PlaneNormal;
	FVector3f PlaneRight;
	FVector3f PlaneUp;
	FVector3f PlaneCenter;

	float CameraFOVExponent;

	FVector3f CameraForward;
	FVector3f CameraUp;
	FVector3f CameraRight;

	float EdgeBlur;

	float AspectRatio;
};

class LIVESTREAMINGTOOLKITSHADERS_API FOWLVideoPlaneShader
{
public:
	static bool Execute_RenderThread(
		FRDGBuilder& RDGBuilder,
		UTexture* Input,
		UTextureRenderTarget2D* Output,
		FOWLVideoPlaneDistortParams Params
	);
};
