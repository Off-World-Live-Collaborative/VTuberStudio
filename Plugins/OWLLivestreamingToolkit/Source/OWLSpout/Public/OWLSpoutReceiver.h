// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "Tools/OWLHelpers.h"
#include "Engine/TextureRenderTarget2D.h"

#include "Windows/AllowWindowsPlatformTypes.h"
THIRD_PARTY_INCLUDES_START
#define WIN32_LEAN_AND_MEAN
#pragma warning(push)
// macro redefinition in DirectX headers from ThirdParty folder while they are already defined by <winerror.h> included
// from "Windows/AllowWindowsPlatformTypes.h"
#pragma warning(disable: 4005)
#include <d3d11.h>
#include <d3d12.h>

#pragma warning(pop)
THIRD_PARTY_INCLUDES_END
#include "Windows/HideWindowsPlatformTypes.h"

class OWLSPOUT_API FOWLSpoutReceiver
{
private:
	// DX12 Interface
	class spoutDX12* Receiver_DX12 = nullptr;
	ID3D12Resource* ReceivedResource_DX12 = nullptr;
	FTextureRHIRef ReceivedTextureFromResource_DX12;

	// DX11 Interface
	ID3D11Device* Device11 = nullptr;
	ID3D11DeviceContext* DeviceContext11 = nullptr;
	ID3D11Texture2D* ReceivedTexture_DX11 = nullptr;
	class spoutSenderNames* SenderNames_DX11 = nullptr;

	bool AlreadyClear_DX11 = true;
	bool AlreadyClear_DX12 = true;
	ERHIType RHIType = ERHIType::Null;
	bool FailedToInitialise = false;

public:
	bool Initialised = false;

private:
	bool InitDX();

	void Receive(FString Name, UTextureRenderTarget2D* DestRenderTarget, bool useFirstAvailableSender);
	bool Receive_DX12(FString name, UTextureRenderTarget2D* DestRenderTarget);
	bool Receive_DX11_RT(FString name, HANDLE Handle, UTextureRenderTarget2D* DestRenderTarget);

	bool InitD3D12(FRHICommandListImmediate& RHICmdList);
	void CopyResourceD3D12(ID3D12Resource* DestResource);
	FString GetFirstAvailableName_DX12() const;
	FString GetFirstAvailableName_DX11() const;
	FTextureRHIRef CreateRHITexture(ID3D12Resource* Resource, EPixelFormat Format);
	ETextureRenderTargetFormat GetRTFormatFromDX(DXGI_FORMAT DxFormat);
	void UpdateDestRenderTargetIfNeeded(int Width, int Height, ETextureRenderTargetFormat Format, UTextureRenderTarget2D* Target);

public:
	~FOWLSpoutReceiver();
	void ReceiveRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D, bool useFirstAvailableSender);
	void Close();
};

class OWLSPOUT_API FOWLSpoutNames
{
private:
	static class spoutSenderNames* SenderNames;
public:
	static TArray<FString> GetActiveSenderNames();
	static void Cleanup();
};
