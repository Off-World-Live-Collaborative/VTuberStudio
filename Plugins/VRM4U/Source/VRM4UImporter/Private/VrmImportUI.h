// VRM4U Copyright (c) 2021-2022 Haruyoshi Yamamoto. This software is released under the MIT License.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Factories/ImportSettings.h"
#include "VrmConvert.h"

#include "VrmImportUI.generated.h"

DECLARE_DELEGATE(FOnResolveFbxReImport);

UCLASS(config=EditorPerProjectUserSettings, AutoExpandCategories=(FTransform), HideCategories=Object, MinimalAPI)
class UVrmImportUI : public UObject, public IImportSettingsParser
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Thumbnail"))
	UTexture2D *Thumbnail;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "VRM Title / Author"))
	FString TitleAuthor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "A-pose(Off to T-pose)"))
	bool bAPoseRetarget = true;

	/** for Mobile. Import root bone only */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Reduce bonemap<=75 for mobile"))
	bool bMobileBone = false;

	/** Materal Type */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
	EVRMImportMaterialType MaterialType;

	/** Outline Material*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "GenerateOutlineMaterial"))
	bool bGenerateOutlineMaterial = true;

	/** Force Override */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Force Override (as New Asset)"))
	bool bForceOverride = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Model scale"))
	float ModelScale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Animation Frame Rate"))
	float FrameRate = 60.0f;

	/** Remove Local Rotation for VRM10 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "VRM10 Remove Local Rotation"))
	bool bVrm10RemoveLocalRotation = false;

	/** Use Bindpose for VRM10 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "VRM10 Bindpose"))
	bool bVrm10Bindpose = false;

	/** Duplicate mesh and renamed humanoid bone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="Generate renamed humanoid mesh"))
	bool bGenerateHumanoidRenamedMesh = false;

	/** Add IK Bone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Generate IK Bone"))
	bool bGenerateIKBone = false;

	/** Add RigIK asset*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Generate RigIK Asset"))
	bool bGenerateRigIK = true;

	/** Remove Physics asset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="No physics asset"))
	bool bSkipPhysics = false;

	/** Remove MorphTarget */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="No MorphTarget"))
	bool bSkipMorphTarget = false;

	/** Use MorphTarget Normal */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Eable MorphTarget Normal(TangentZDelta)"))
	bool bEnableMorphTargetNormal = false;

#define VRM4U_MorphStrictMode false

#if UE_VERSION_OLDER_THAN(4,26,0)
	static const bool VRM4U_UseBC7 = false;
#else
	static const bool VRM4U_UseBC7 = true;
#endif


	/** Use Strict MorphTarget Name Mode */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "**UE5EA** controlrig work around: Eable MorphTarget Name Check"))
	bool bStrictMorphTargetNameMode = VRM4U_MorphStrictMode;

	/** Use Strict MorphTarget Name Mode */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Remove BlendShapeGroup prefix for old VRM file"))
	bool bRemoveBlendShapeGroupPrefix = false;

	/** Use Opaque insted of translucent */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Force Opaque"))
	bool bForceOpaque = false;

	/** Use TwoSided */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Force TwoSided"))
	bool bForceTwoSided = false;

	/** Save as single uasset file */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "Single uasset file"))
	bool bSingleUAssetFile = true;

	/** Use GridTexture by Default */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Texture] Use DummyGrid by DefaultBaseTexture"))
	bool bDefaultGridTextureMode = false;

	/** Use BC7 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Texture] Use BC7 for BaseTexture"))
	bool bBC7Mode = VRM4U_UseBC7;

	/** Generate mipmap (be careful of MatCap texture)*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Texture] Generate Mipmap"))
	bool bMipmapGenerateMode = false;

	/** Merge material using same parameter */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="[Optimize] Merge material"))
	bool bMergeMaterial = true;

	/** Merge primitives using same material */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Optimize] Merge primitive"))
	bool bMergePrimitive = true;

	/** Use optimized MaterialInstance */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="[Optimize] use opt material"))
	bool bOptimizeMaterial = true;

	/** Remove unused vertex */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Optimize] remove unused vertex"))
	bool bOptimizeVertex = true;

	/** Remove degenerate triangles */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Optimize] remove degenerate triangles"))
	bool bRemoveDegenerateTriangles = false;

	/** BoneWeight influence */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Optimize] Bone Weight Influence Num"))
	int BoneWeightInfluenceNum = 8;

	/** Remove bone has no mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName = "[Optimize] Remove bone used DCC tool"))
	bool bSimpleRoot = true;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="Delete bone without mesh"))
	bool bSkipNoMeshBone = false;

	/** for DEBUG. Import root bone only */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Mesh, meta = (ImportType = "StaticMesh|SkeletalMesh", DisplayName="[Debug] One bone only"))
	bool bDebugOneBone = false;

	/** Skeleton to use for imported asset. When importing a mesh, leaving this as "None" will create a new skeleton. When importing an animation this MUST be specified to import the asset. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category=Mesh, meta=(ImportType="SkeletalMesh"))
	class USkeleton* Skeleton;

	//
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Personation/CharacterizationPermission")
		FString allowedUserName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Personation/CharacterizationPermission")
		FString violentUsageName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Personation/CharacterizationPermission")
		FString sexualUsageName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Personation/CharacterizationPermission")
		FString commercialUsageName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Personation/CharacterizationPermission")
		FString otherPermissionUrl;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Redistribution/ModificationsLicense")
		FString licenseName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "License_Redistribution/ModificationsLicense")
		FString otherLicenseUrl;

private:
	UPROPERTY()
	FImportOptionData data;
public:
	const FImportOptionData *GenerateOptionData();

	UFUNCTION(BlueprintCallable, Category = Miscellaneous)
	void ResetToDefault();

	/** IImportSettings Interface */
	virtual void ParseFromJson(TSharedRef<class FJsonObject> ImportSettingsJson) override;

	/* Whether this UI is construct for a reimport */
	bool bIsReimport;
};


