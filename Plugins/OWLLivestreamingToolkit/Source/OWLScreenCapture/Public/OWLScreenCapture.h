// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once


#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GameFramework/Actor.h"
#include "Tools/OWLHelpers.h"
#include "Templates/PimplPtr.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#if (PLATFORM_WINDOWS)

#include "Windows/AllowWindowsPlatformTypes.h"
#include <dxgiformat.h>
#include "Windows/HideWindowsPlatformTypes.h"

#endif

#include "OWLScreenCapture.generated.h"

namespace winrt
{
    template <typename T>
	struct com_ptr;
}

class WinRTCapture;
class UOWLWatermark;

UENUM()
enum class EOWLScreenCaptureType : uint8
{
	SCT_Monitor UMETA(DisplayName = "Monitor Capture"),
	SCT_Window UMETA(DisplayName = "Window Capture"),
	//SCT_Game UMETA(DisplayName = "Game Capture"),
};

UCLASS()
class OWLSCREENCAPTURE_API AOWLScreenCapture: public AActor
{
	GENERATED_BODY()

public:
	struct FPrivateData;

	AOWLScreenCapture(const FObjectInitializer& ObjectInitializer);
	~AOWLScreenCapture();

	// TODO: we should probably add an option for disabling the annoying yellow boarder

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	EOWLScreenCaptureType ScreenCaptureType = EOWLScreenCaptureType::SCT_Monitor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	UTextureRenderTarget2D* RenderTarget = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	bool Active = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	bool CaptureCursor = false;

	// this will be marked hidden by details customisation
	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = OWLScreenCapture)
	FString MonitorName = "";

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = OWLScreenCapture)
	FString WindowName = "";

private:
	virtual void PostRegisterAllComponents() override;
	ERHIType RHIType = ERHIType::Null;
	bool CreateInteropDevice();
	virtual void PostInitProperties() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const override;
	bool CreateCapture_Monitor();
	bool CreateCapture_Window();
	bool BeginCaptureCheck();

	WinRTCapture* Capture = nullptr;
	TPimplPtr<FPrivateData> PrivateData = nullptr;

	bool Initialised = false;

	struct ID3D11DeviceContext1* DeviceContext11 = nullptr;
	struct ID3D11Device1* Device11 = nullptr;

	FTextureRHIRef UnrealTexture = nullptr;

	FTextureRHIRef CreateRHITextureDX12(struct ID3D12Resource* Resource, EPixelFormat Format);
	struct ID3D12Resource* OpenSharedTextureForD3D12(HANDLE TextureHandle);
	void OnNewFrame11(winrt::com_ptr<struct ID3D11Texture2D>);
	void OnNewFrame12(HANDLE SharedTextureHandle, FIntPoint Resolution, DXGI_FORMAT Format);
	ETextureRenderTargetFormat GetRTFormatFromDX(DXGI_FORMAT DxFormat);
	bool StartCapture();
	void StopCapture();


	UPROPERTY()
	UOWLWatermark* Watermark;

	FString ActiveMonitorName = "";
	FString ActiveWindowName = "";
	bool ActiveCursor = false;
	bool D3D11RHI_ShouldCreateWithD3DDebug();

	HANDLE CurrentSharedTextureHandle = 0;
	ID3D12Resource* CurrentSharedTexture = nullptr;
};
