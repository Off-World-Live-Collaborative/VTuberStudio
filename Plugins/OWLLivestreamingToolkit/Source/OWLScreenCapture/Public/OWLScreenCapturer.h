#pragma once

#include <dxgiformat.h>

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
#include "Windows/HideWindowsPlatformTypes.h"

#endif

#include "OWLScreenCapturer.generated.h"

namespace winrt
{
    template <typename T>
	struct com_ptr;
}

class WinRTCapture;

UENUM()
enum class EOWLScreenCaptureType : uint8
{
	SCT_Monitor UMETA(DisplayName = "Monitor Capture"),
	SCT_Window UMETA(DisplayName = "Window Capture"),
	//SCT_Game UMETA(DisplayName = "Game Capture"),
};

USTRUCT(BlueprintType)
struct FOWLScreenCaptureOptions
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	EOWLScreenCaptureType ScreenCaptureType = EOWLScreenCaptureType::SCT_Monitor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	UTextureRenderTarget2D* RenderTarget = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	bool Active = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	bool CaptureCursor = false;

	// this will be marked hidden by details customisation
	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = OWLScreenCapture)
	FString MonitorName = "";

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = OWLScreenCapture)
	FString WindowName = "";

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = OWLScreenCapture)
	bool bHideRenderTarget = false;
};

class OWLSCREENCAPTURE_API FOWLScreenCapturer
{
	struct FPrivateData;

public:
	FOWLScreenCapturer(EOWLScreenCaptureType CaptureType, UTextureRenderTarget2D* RenderTarget, UWorld* World, bool bCaptureCursor = false);
	~FOWLScreenCapturer();

public:
	/* Constructor function for generating the capturer and initialising it */
	static FOWLScreenCapturer* Create(
		EOWLScreenCaptureType CaptureType,
		UTextureRenderTarget2D* RenderTarget,
		UWorld* World,
		bool bCaptureCursor = false
		);
public:
	bool StartCapture();
	void StopCapture();
	void SetOptions(FOWLScreenCaptureOptions Options);
	void SetWindowName(FString Name);
	void SetMonitorName(FString Name);

	void SetCaptureType(EOWLScreenCaptureType CaptureType);
	void SetRenderTarget(UTextureRenderTarget2D* Target);
	void SetCaptureCursor(bool NewState);

	bool IsActive();


protected:
	FString MonitorName = "";
	FString WindowName = "";
	EOWLScreenCaptureType ScreenCaptureType;
	UTextureRenderTarget2D* RenderTarget = nullptr;
	bool bCaptureCursor = false;
	bool bCapturing = false;
private:
	ERHIType RHIType = ERHIType::Null;
	bool CreateInteropDevice();
	bool CreateCapture_Monitor();
	bool CreateCapture_Window();
	bool BeginCaptureCheck();
	UWorld* World = nullptr;

	WinRTCapture* Capture = nullptr;
	TPimplPtr<FPrivateData> PrivateData = nullptr;

	struct ID3D11DeviceContext1* DeviceContext11 = nullptr;
	struct ID3D11Device1* Device11 = nullptr;

	FTextureRHIRef UnrealTexture = nullptr;

	FTextureRHIRef CreateRHITextureDX12(struct ID3D12Resource* Resource, EPixelFormat Format);
	struct ID3D12Resource* OpenSharedTextureForD3D12(HANDLE TextureHandle);
	void OnNewFrame11(winrt::com_ptr<struct ID3D11Texture2D>);
	void OnNewFrame12(HANDLE SharedTextureHandle, FIntPoint Resolution, DXGI_FORMAT Format);
	ETextureRenderTargetFormat GetRTFormatFromDX(DXGI_FORMAT DxFormat);

	FString ActiveMonitorName = "";
	FString ActiveWindowName = "";
	bool ActiveCursor = false;
	bool D3D11RHI_ShouldCreateWithD3DDebug();

	HANDLE CurrentSharedTextureHandle = 0;
	ID3D12Resource* CurrentSharedTexture = nullptr;

	FDelegateHandle OnFrameHandle;
	FDelegateHandle OnProblemHandle;
};
