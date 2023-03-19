// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLSpoutSender.h"
#include "OWLSpoutSenderManager.generated.h"

class UOWLWatermark;

USTRUCT(BlueprintType)
struct OWLSPOUT_API FOWLSpoutSenderInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	bool Active = false;

	/* Spout sender name that is used in editor targets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	FString Name = "";

	/* Spout sender name that is used in game (standalone/packaged) targets  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	FString StandaloneName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	UTextureRenderTarget2D* SourceRenderTarget = nullptr;

	FOWLSpoutSender* SpoutSender = nullptr;

public:
	void Send(FString SenderName);
	void TryClose(bool keepActive = false);
};


UCLASS()
class OWLSPOUT_API AOWLSpoutSenderManager : public AActor
{
	GENERATED_BODY()

public:
	AOWLSpoutSenderManager(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Spout Sender Settings")
	TArray<FOWLSpoutSenderInterface> SpoutSenders;

private:
	UPROPERTY()
	UOWLWatermark* Watermark;
	TEnumAsByte<EWorldType::Type> StartingWorldType = EWorldType::None;
	static bool ClosedEditorSenders;

private:
	void ValidateAndSend(FString Name, FOWLSpoutSenderInterface& Sender);
	void CloseAllSenders(bool keepActive);
	void OnEndFrame();
	bool ShouldApplyWatermark(const UWorld* World, const UTextureRenderTarget2D* SenderRT) const;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BeginDestroy() override;
	virtual void PostInitProperties() override;

public:
	virtual bool ShouldTickIfViewportsOnly() const override;
};
