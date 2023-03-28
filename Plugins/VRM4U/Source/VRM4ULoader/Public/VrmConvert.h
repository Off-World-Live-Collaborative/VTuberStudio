// VRM4U Copyright (c) 2021-2022 Haruyoshi Yamamoto. This software is released under the MIT License.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Misc/EngineVersionComparison.h"
#include "VrmUtil.h"
#include "VrmJson.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/mesh.h>
#include <assimp/postprocess.h>
#include <assimp/material.h>
#include <assimp/GltfMaterial.h>
#include <assimp/vrm/vrmmeta.h>

//#include "VrmConvert.generated.h"

/**
 * 
 */

struct aiScene;
class UTexture2D;
class UMaterialInterface;
class USkeletalMesh;
class UVrmAssetListObject;
class UVrmLicenseObject;
class UPackage;


class VRM4ULOADER_API VRMConverter {
public:

	VrmJson jsonData;
	const aiScene* aiData = nullptr;

	char* GetMatName(int matNo) const;
	char* GetMatShaderName(int matNo) const;
	int GetMatNum() const;
	int GetMatCullMode(int matNo) const;
	int GetMatZWrite(int matNo) const;

	bool GetMatParam(VRM::VRMMaterial &m, int matNo) const;


	static bool IsImportMode();
	static void SetImportMode(bool bImportMode);
	static FString NormalizeFileName(const char *str);
	static FString NormalizeFileName(const FString &str);

	static bool NormalizeBoneName(const aiScene *mScenePtr);

	bool Init(const uint8* pFileData, size_t dataSize, const aiScene*);

	bool ConvertTextureAndMaterial(UVrmAssetListObject *vrmAssetList);
	bool ConvertModel(UVrmAssetListObject *vrmAssetList);
	bool ConvertMorphTarget(UVrmAssetListObject *vrmAssetList);

	UVrmLicenseObject *GetVRMMeta(const aiScene *mScenePtr);
	bool ConvertVrmFirst(UVrmAssetListObject* vrmAssetList, const uint8* pData, size_t dataSize);
	bool ConvertVrmMeta(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr, const uint8* pData, size_t dataSize);
	bool ConvertVrmMetaRenamed(UVrmAssetListObject* vrmAssetList, const aiScene* mScenePtr, const uint8* pData, size_t dataSize);

	bool ConvertHumanoid(UVrmAssetListObject *vrmAssetList);
	bool ConvertRig(UVrmAssetListObject *vrmAssetList);
	bool ConvertPose(UVrmAssetListObject* vrmAssetList);

	UPackage *CreatePackageFromImportMode(UPackage *p, const FString &name);

	class VRM4ULOADER_API Options {
	public:
		static Options & Get();

		const FImportOptionData *ImportOption = nullptr;
		void SetVrmOption(const FImportOptionData *p) {
			ImportOption = p;
		}

		class USkeleton *GetSkeleton();
		bool IsSimpleRootBone() const;

		bool IsSkipPhysics() const;

		bool IsSkipNoMeshBone() const;

		bool IsSkipMorphTarget() const;

		bool IsEnableMorphTargetNormal() const;

		bool IsStrictMorphTargetNameMode() const;

		bool IsRemoveBlendShapeGroupPrefix() const;

		bool IsVRM10RemoveLocalRotation() const;
		bool IsVRM10Bindpose() const;

		bool IsGenerateHumanoidRenamedMesh() const;

		bool IsGenerateIKBone() const;
		bool IsGenerateRigIK() const;

		bool IsDebugOneBone() const;

		bool IsMobileBone() const;

		int GetBoneWeightInfluenceNum() const;

		bool IsForceOpaque() const;
		bool IsForceTwoSided() const;

		bool IsSingleUAssetFile() const;

		bool IsDefaultGridTextureMode() const;
		bool IsBC7Mode() const;
		bool IsMipmapGenerateMode() const;

		bool IsGenerateOutlineMaterial() const;
		bool IsMergeMaterial() const;

		bool IsMergePrimitive() const;

		bool IsOptimizeMaterial() const;

		bool IsOptimizeVertex() const;

		bool IsRemoveDegenerateTriangles() const;

		void ClearModelType();

		bool IsVRMModel() const;
		bool IsVRM0Model() const;
		bool IsVRM10Model() const;

		void SetVRM0Model(bool bVRM);
		void SetVRM10Model(bool bVRM);

		bool IsBVHModel() const;
		void SetBVHModel(bool bBVH);

		bool IsPMXModel() const;
		void SetPMXModel(bool bPMX);

		bool IsForceOverride() const;
		float GetModelScale() const;

		float GetAnimationFrameRate() const;

		bool IsAPoseRetarget() const;

		EVRMImportMaterialType GetMaterialType() const;
		void SetMaterialType(EVRMImportMaterialType type);
	};
};


class VRM4ULOADER_API VrmConvert
{
public:
	VrmConvert();
	~VrmConvert();
};

extern FString VRM4U_GetPackagePath(UPackage* Outer);
extern UPackage* VRM4U_CreatePackage(UPackage* Outer, FName Name);

template< class T >
T* VRM4U_NewObject(UPackage* Outer, FName Name, EObjectFlags Flags = RF_NoFlags, UObject* Template = nullptr, bool bCopyTransientsFromClassDefaults = false, FObjectInstancingGraph* InInstanceGraph = nullptr) {
	UPackage* pkg = Outer;
	if (VRMConverter::Options::Get().IsSingleUAssetFile() == false) {
		pkg = VRM4U_CreatePackage(Outer, Name);
	}

	return NewObject<T>(pkg, Name, Flags, Template, bCopyTransientsFromClassDefaults, InInstanceGraph);
}
