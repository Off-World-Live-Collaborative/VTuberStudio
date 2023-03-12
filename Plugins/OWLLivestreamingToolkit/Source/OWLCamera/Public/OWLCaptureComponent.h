// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneComponent.h"
#include "Widgets/SWindow.h"
#include "Widgets/SVirtualWindow.h"
#include "Input/HittestGrid.h"
#include "ShowFlags.h"
#include "Components/SceneCaptureComponent.h"
#include "OWLCaptureComponent.generated.h"

class FSceneViewStateInterface;
class UCameraComponent;
struct FMinimalViewInfo;
class FWidgetRenderer;
class UOWLWatermark;


UCLASS(Blueprintable, hidecategories = (Collision, Object, Physics, SceneComponent, Mobility, Tags, Activation, Cooking, Rendering), ClassGroup = Rendering, meta = (BlueprintSpawnableComponent))
class OWLCAMERA_API UOWLCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UOWLCaptureComponent(const FObjectInitializer& ObjectInitializer);

	/**
	* Render target to render into and send to Spout
	* If left unset the render target will be generated automatically
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings")
	UTextureRenderTarget2D* TextureTarget = nullptr;

	/**
	* Min: 64px, Max: 7680
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta = (NoSpinbox=true))
	int ResolutionX = 1920;

	/**
	* Min: 64px, Max: 4320
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta= (NoSpinbox=true))
	int ResolutionY = 1080;

	UPROPERTY(EditAnywhere, interp, Category = "Off World Live Capture Settings")
	TArray<struct FEngineShowFlagsSetting> ShowFlagSettings;

	/** Tick if you want to pause rendering to the render target */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	bool PauseRendering = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings|UMG Rendering")
	bool RenderHUD = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings|UMG Rendering")
	TSubclassOf<class UUserWidget> WidgetType;

	UPROPERTY()
	UUserWidget* WidgetToRender = nullptr;

	/** Tick if you want to render selected primitives only */
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	bool UseShowOnlyList = false;

	/** The components won't rendered by current component.*/
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent> > HiddenComponents;

	/** The actors to hide in the scene capture. */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	TArray<AActor*> HiddenActors;

	/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent> > ShowOnlyComponents;

	/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	TArray<AActor*> ShowOnlyActors;

	/** By default we invert the ue4's default alpha value of captured textures - you can disable it here */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	bool InvertAlpha = true;

	/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */
	UPROPERTY(EditAnywhere, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = ".1", UIMax = "10"))
	float LODDistanceFactor = 1.0f;

	/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */
	UPROPERTY(EditAnywhere, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = "100", UIMax = "10000"))
	float MaxViewDistanceOverride = -1;

public:
	UFUNCTION(BlueprintPure, Category = "OWLCapture")
	UCameraComponent* GetTargetCamera() const;

	/** Adds the component to our list of hidden components. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void HideComponent(UPrimitiveComponent* InComponent);

	/**
	 * Adds all primitive components in the actor to our list of hidden components.
	 * @param bIncludeFromChildActors Whether to include the components from child actors
	 */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Adds the component to our list of show-only components. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ShowOnlyComponent(UPrimitiveComponent* InComponent);

	/**
	* Adds all primitive components in the actor to our list of show-only components.
	* @param bIncludeFromChildActors Whether to include the components from child actors
	*/
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Removes a component from the Show Only list. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);

	/**
	* Removes an actor's components from the Show Only list.
	* @param bIncludeFromChildActors Whether to remove the components from child actors
	*/
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Clears the Show Only list. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ClearShowOnlyComponents();

	/** Clears the hidden list. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ClearHiddenComponents();

	/** Get Current UMG Widget
	 * WARNING: might return nullptr if the WidgetType is not set */
	UFUNCTION(BlueprintCallable, Category = "UMGRendering")
	UUserWidget* GetCurrentUMGWidget();

public:
	FEngineShowFlags ShowFlags;
	int32 ViewModeIndex;
public:
	DECLARE_MULTICAST_DELEGATE(FOnRenderFinished);
	FOnRenderFinished OnRenderFinished;

	FSceneViewStateInterface* GetViewState(int32 ViewIndex, const ERHIFeatureLevel::Type FeatureLevel);
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

	virtual void BeginDestroy() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif

	bool UsingShowOnly() const;
	bool UsingHideOnly() const;

protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RenderScene();
	void SetupViewFamily(class FSceneViewFamily& ViewFamily, const TArrayView<FMinimalViewInfo> Views);
	bool SetupTextureTarget();
	bool SetupInternalRenderTarget(const EPixelFormat PixelFormat);
	void UpdateShowFlags();

	/**
	 * The view state holds persistent scene rendering state and enables occlusion culling in scene captures.
	 * NOTE: This object is used by the rendering thread. When the game thread attempts to destroy it, FDeferredCleanupInterface will keep the object around until the RT is done accessing it.
	 * NOTE: It is not safe to put a FSceneViewStateReference in a TArray, which moves its contents around without calling element constructors during realloc.
	 */
	TIndirectArray<FSceneViewStateReference> ViewStates;
	float CurrentAspectRatio = 1.0f;
	UPROPERTY()
	UTextureRenderTarget2D* InternalRT = nullptr;
	UPROPERTY()
	UStaticMesh* CameraMesh = nullptr;
	UPROPERTY()
	UStaticMesh* CineCameraMesh = nullptr;

private:
	void InvertAlphaAndFinish_RenderThread(FRHICommandListImmediate& RHICmdList, FRHITexture2D* InSourceTexture);
	void Finish_RenderThread(FRHICommandListImmediate& RHICmdList, FRHITexture2D* InSourceTexture);

private:
	UPROPERTY()
	UOWLWatermark* Watermark;
	bool WrongAttachmentWarningIssued = false;
	FWidgetRenderer* WidgetRenderer = nullptr;
	TSharedPtr<SVirtualWindow> Window;

private:
	void InitWidgetRenderer();
	void ReleaseRenderer();
	void RenderWidgetOnTick(float DeltaTime, UTextureRenderTarget2D* WidgetTarget);
};
