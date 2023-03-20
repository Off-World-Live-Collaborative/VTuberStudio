// Copyright Off World Live Limited 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VideoPlanePlacement.generated.h"

class UMediaTexture;
class UStaticMesh;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, hidecategories = (Collision, Attachment, Actor, CameraActor))
class OWLCOMPOSURE_API AOWLVideoPlanePlacement : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOWLVideoPlanePlacement();

	virtual void PostLoad() override;
	virtual void PostInitializeComponents() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Video Input")
	FIntPoint Resolution = FIntPoint(1920,1080);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Video Input", Meta=(EditCondition="false"))
	float AspectRatio = 1.7777777;

	/* UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Video Input")*/
	UPROPERTY()
	UMediaTexture* MediaInput = nullptr;

#if WITH_EDITOR
public:
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Preview Mesh")
	UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY()
	UStaticMesh* Mesh = nullptr;

	UPROPERTY()
	UMaterial* OriginalMaterial = nullptr;

	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial = nullptr;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetMeshComponentScale();
};
