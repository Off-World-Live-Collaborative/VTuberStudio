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

class OWLSPOUT_API FOWLSpoutSender
{
private:
	ERHIType RHIType = ERHIType::Null;

public:
	// spout DX12 Interface
	class spoutDX12* Sender_DX12 = nullptr;
	// spout DX11 Interface
	class spoutSenderNames* SenderNames_DX11 = nullptr;
	// DX11 Interface
	ID3D11Device* Device11 = nullptr;
	ID3D11DeviceContext* DeviceContext11 = nullptr;
	// DX11 Sending resources
	HANDLE SenderHandle_DX11;
	ID3D11Texture2D* SendingTexture_DX11;
	FString SenderName_DX11;

	FTexture2DRHIRef SendingTextureRHI;

	bool Initialised = false;
	bool FailedToInitialise = false;

private:
	bool InitDX();
	void Send(FString InName, UTextureRenderTarget2D* srcRenderTarget, bool bFixGamma);

public:
	~FOWLSpoutSender();
	void SendRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D, bool bFixGamma = true);
	void Close();

private:
	bool CreateSharedTexture_DX11(
		const unsigned int Width,
		const unsigned int Height,
		const unsigned long Format,
		HANDLE& Handle,
		ID3D11Texture2D*& Texture);

	bool bHasLogged32BitRGIssue = false;
	bool SetupSendingTextureRHI(UTextureRenderTarget2D* srcRenderTarget, FRHICommandListImmediate& RHICmdList, bool bFixGamma);
	void SetSendingTextureRHIResolution(FIntPoint NewResolution, EPixelFormat Format);
};
