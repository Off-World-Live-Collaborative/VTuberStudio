// VRM4U Copyright (c) 2021-2022 Haruyoshi Yamamoto. This software is released under the MIT License.

#include "VrmConvert.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/mesh.h>
#include <assimp/postprocess.h>
#include <assimp/GltfMaterial.h>
#include <assimp/vrm/vrmmeta.h>
#include "UObject/Package.h"

//static void assimpDummy() {
	//volatile float f = Assimp::Math::PI<float>();
//}


static bool bImportMode = false;
bool VRMConverter::IsImportMode() {
	return bImportMode;
}
void VRMConverter::SetImportMode(bool b) {
	bImportMode = b;
}

UPackage *VRMConverter::CreatePackageFromImportMode(UPackage *p, const FString &name) {
	FString n =	p->GetName();
	n += TEXT("/") + name;
#if	UE_VERSION_OLDER_THAN(4,26,0)
	return CreatePackage(nullptr, *n);
#else
	return CreatePackage(*n);
#endif
}


FString VRMConverter::NormalizeFileName(const char *str) {
	FString ret = UTF8_TO_TCHAR(str);

	return NormalizeFileName(ret);
}

FString VRMConverter::NormalizeFileName(const FString &str) {
	FString ret = str;
	FText error;

	if (!FName::IsValidXName(*ret, INVALID_OBJECTNAME_CHARACTERS INVALID_LONGPACKAGE_CHARACTERS, &error)) {
		FString s = INVALID_OBJECTNAME_CHARACTERS;
		s += INVALID_LONGPACKAGE_CHARACTERS;

		auto a = s.GetCharArray();
		for (int i = 0; i < a.Num(); ++i) {
			FString tmp;
			tmp.AppendChar(a[i]);
			ret = ret.Replace(tmp.GetCharArray().GetData(), TEXT("_"));
			//int ind;
			//if (ret.FindChar(s[i], ind)) {
			//}
		}
	}
	return ret;
}

static bool hasInvalidBoneName(const aiString &s) {
	for (uint32_t i = 0; i < s.length; ++i) {
		if (s.data[i] >= 0 && s.data[i] <= 0x7e) {
			continue;
		}
		return true;
	}
	return false;
}

static int totalCount = 0;

static bool AddReplaceList(const aiNode *node, TMap<FString, FString> &map) {

	if (node == nullptr) {
		return true;
	}

	if (hasInvalidBoneName(node->mName)) {
		FString s = TEXT("replace_") + FString::FromInt(totalCount);
		if (map.Find(UTF8_TO_TCHAR(node->mName.C_Str())) == nullptr) {
			map.Add(UTF8_TO_TCHAR(node->mName.C_Str()), s);
			totalCount++;
		}
	}

	for (uint32_t i = 0; i < node->mNumChildren; ++i) {
		AddReplaceList(node->mChildren[i], map);
	}
	return true;
}

static bool ReplaceNodeName(aiNode *node, const TMap<FString, FString> &map) {

	if (node == nullptr) {
		return true;
	}

	auto a = map.Find(UTF8_TO_TCHAR(node->mName.C_Str()));
	if (a) {
		node->mName.Set(TCHAR_TO_ANSI(**a));
	}

	for (uint32_t i = 0; i < node->mNumChildren; ++i) {
		ReplaceNodeName(node->mChildren[i], map);
	}
	return true;
}

bool VRMConverter::NormalizeBoneName(const aiScene *mScenePtr) {

	return true;
	//auto p = const_cast<aiScene*>(mScenePtr);
	//if (p == nullptr) return false;

	TMap<FString, FString> replaceTable;

	totalCount = 0;
	//mScenePtr->mMeshes[0]->bon

	AddReplaceList(mScenePtr->mRootNode, replaceTable);

	for (uint32_t m = 0; m < mScenePtr->mNumMeshes; ++m) {
		if (hasInvalidBoneName(mScenePtr->mMeshes[m]->mName)) {
			FString s = TEXT("replace_") + FString::FromInt(totalCount);
			if (replaceTable.Find(UTF8_TO_TCHAR(mScenePtr->mMeshes[m]->mName.C_Str())) == nullptr) {
				replaceTable.Add(UTF8_TO_TCHAR(mScenePtr->mMeshes[m]->mName.C_Str()), s);
				totalCount++;
			}
		}
	}

	// replace!

	ReplaceNodeName(mScenePtr->mRootNode, replaceTable);

	for (uint32_t m = 0; m < mScenePtr->mNumMeshes; ++m) {
		if (auto a = replaceTable.Find(UTF8_TO_TCHAR(mScenePtr->mMeshes[m]->mName.C_Str()))){
			mScenePtr->mMeshes[m]->mName.Set(TCHAR_TO_ANSI(**a));
		}

		auto &aiM = mScenePtr->mMeshes[m];
		for (uint32_t b = 0; b < aiM->mNumBones; ++b) {
			if (auto a = replaceTable.Find(UTF8_TO_TCHAR(aiM->mBones[b]->mName.C_Str()))) {
				aiM->mBones[b]->mName.Set(TCHAR_TO_ANSI(**a));
			}
		}
	}

	{
		VRM::VRMMetadata *meta = reinterpret_cast<VRM::VRMMetadata*>(mScenePtr->mVRMMeta);

		for (int s = 0; s < meta->springNum; ++s) {
			auto &a = meta->springs[s];
			if (a.bones_name == nullptr) {
				continue;
			}
			for (int b = 0; b < a.boneNum; ++b) {
				if (auto str = replaceTable.Find(UTF8_TO_TCHAR(a.bones_name[b].C_Str()))) {
					a.bones_name[b].Set(TCHAR_TO_ANSI(**str));
				}
			}
		}

		for (int c = 0; c < meta->colliderGroupNum; ++c) {
			auto &a = meta->colliderGroups[c];
			if (auto str = replaceTable.Find(UTF8_TO_TCHAR(a.node_name.C_Str()))) {
				a.node_name.Set(TCHAR_TO_ANSI(**str));
			}
		}

		for (auto &a : meta->humanoidBone) {
			if (auto str = replaceTable.Find(UTF8_TO_TCHAR(a.nodeName.C_Str()))) {
				a.nodeName.Set(TCHAR_TO_ANSI(**str));
			}
		}
	}


	return true;
}


////

VRMConverter::Options& VRMConverter::Options::Get(){
	static VRMConverter::Options o;
	return o;
}

USkeleton *VRMConverter::Options::GetSkeleton() {
	if (ImportOption == nullptr) return nullptr;

	return ImportOption->Skeleton;
}

bool VRMConverter::Options::IsSkipNoMeshBone() const {
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bSkipNoMeshBone;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsSkipMorphTarget() const {
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bSkipMorphTarget;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsEnableMorphTargetNormal() const {
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bEnableMorphTargetNormal;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsStrictMorphTargetNameMode() const {
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bStrictMorphTargetNameMode;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsRemoveBlendShapeGroupPrefix() const {
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bRemoveBlendShapeGroupPrefix;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsGenerateHumanoidRenamedMesh() const {
	if (ImportOption == nullptr) return false;
	return ImportOption->bGenerateHumanoidRenamedMesh;
}

bool VRMConverter::Options::IsGenerateIKBone() const {
	if (ImportOption == nullptr) return false;
	return ImportOption->bGenerateIKBone;
}
bool VRMConverter::Options::IsGenerateRigIK() const {
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bGenerateRigIK;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsMobileBone() const {
	bool ret = false;
#if (PLATFORM_WINDOWS)
#else
	ret = true;
#endif


#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bMobileBone;
#else
	return ret;
#endif
}

int VRMConverter::Options::GetBoneWeightInfluenceNum() const {
	int ret = 8;

#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return FMath::Clamp(ImportOption->BoneWeightInfluenceNum, 1, 8);
#else
	return ret;
#endif
}


bool VRMConverter::Options::IsDebugOneBone() const {
	bool ret = false;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bDebugOneBone;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsSimpleRootBone() const {
	bool ret = true;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bSimpleRoot;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsSkipPhysics() const {
	bool ret = true;

	if (IsDebugOneBone()) {
		return true;
	}
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bSkipPhysics;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsForceOpaque() const {
	if (ImportOption == nullptr) return false;
	return ImportOption->bForceOpaque;
}

bool VRMConverter::Options::IsForceTwoSided() const {
	if (ImportOption == nullptr) return false;
	return ImportOption->bForceTwoSided;
}

bool VRMConverter::Options::IsSingleUAssetFile() const {
	if (ImportOption == nullptr) return true;
	return ImportOption->bSingleUAssetFile;
}

bool VRMConverter::Options::IsDefaultGridTextureMode() const {
	bool ret = false;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bDefaultGridTextureMode;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsBC7Mode() const {
	if (ImportOption == nullptr) return true;
	return ImportOption->bBC7Mode;
}

bool VRMConverter::Options::IsMipmapGenerateMode() const {
	bool ret = true;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bMipmapGenerateMode;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsGenerateOutlineMaterial() const {
	bool ret = true;
	if (ImportOption == nullptr) return true;
	return ImportOption->bGenerateOutlineMaterial;
}


bool VRMConverter::Options::IsMergeMaterial() const {
	bool ret = true;
	if (ImportOption == nullptr) return true;
	return ImportOption->bMergeMaterial;
}

bool VRMConverter::Options::IsMergePrimitive() const {
	if (ImportOption == nullptr) return true;
	return ImportOption->bMergePrimitive;
}

bool VRMConverter::Options::IsOptimizeVertex() const {
	if (ImportOption == nullptr) return true;
	return ImportOption->bOptimizeVertex;
}

bool VRMConverter::Options::IsRemoveDegenerateTriangles() const {
	if (ImportOption == nullptr) return true;
	return ImportOption->bRemoveDegenerateTriangles;
}

static bool bbVRM0 = false;
static bool bbVRM10 = false;
void VRMConverter::Options::SetVRM0Model(bool bVRM) {
	bbVRM0 = bVRM;
	bbVRM10 = !bVRM;
}
void VRMConverter::Options::SetVRM10Model(bool bVRM) {
	bbVRM10 = bVRM;
	bbVRM0 = !bVRM;
}

bool VRMConverter::Options::IsVRM0Model() const {
	return bbVRM0;
}
bool VRMConverter::Options::IsVRM10Model() const {
	return bbVRM10;
}
bool VRMConverter::Options::IsVRM10RemoveLocalRotation() const {
	bool ret = true;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bVrm10RemoveLocalRotation;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsVRM10Bindpose() const {
	bool ret = true;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bVrm10Bindpose;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsVRMModel() const {
	return IsVRM0Model() || IsVRM10Model();
}

static bool bbBVH = false;
void VRMConverter::Options::SetBVHModel(bool bBVH) {
	bbBVH = bBVH;
}

bool VRMConverter::Options::IsBVHModel() const {
	return bbBVH;
}

static bool bbPMX = false;
void VRMConverter::Options::SetPMXModel(bool bVRM) {
	bbPMX = bVRM;
}

bool VRMConverter::Options::IsPMXModel() const {
	return bbPMX;
}

void VRMConverter::Options::ClearModelType() {
	bbVRM0 = false;
	bbVRM10 = false;
	bbBVH = false;
	bbPMX = false;
}

bool VRMConverter::Options::IsForceOverride() const {
	bool ret = true;
#if WITH_EDITOR
	if (ImportOption == nullptr) return ret;

	return ImportOption->bForceOverride;
#else
	return ret;
#endif
}

float VRMConverter::Options::GetModelScale() const {
	if (ImportOption == nullptr) return 1.f;
	return ImportOption->ModelScale;
}

float VRMConverter::Options::GetAnimationFrameRate() const {
	if (ImportOption == nullptr) return 1.f;
	return ImportOption->FrameRate;
}

bool VRMConverter::Options::IsAPoseRetarget() const {
	if (IsDebugOneBone()) {
		return false;
	}
#if WITH_EDITOR
	if (ImportOption == nullptr) return false;

	return ImportOption->bAPoseRetarget;
#else
	return false;
#endif
}


static EVRMImportMaterialType mType = EVRMImportMaterialType::VRMIMT_Auto;
void VRMConverter::Options::SetMaterialType(EVRMImportMaterialType t) {
	mType = t;
}
EVRMImportMaterialType VRMConverter::Options::GetMaterialType() const {
	if (ImportOption == nullptr) return mType;
	return ImportOption->MaterialType;
}

////
VrmConvert::VrmConvert()
{
}

VrmConvert::~VrmConvert()
{
}

FString VRM4U_GetPackagePath(UPackage* Outer) {
	if (Outer != GetTransientPackage()) {
		FString s = Outer->GetPathName();
		FString s1, s2;
		s.Split(TEXT("/"), &s1, &s2, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

		return s1 + TEXT("/");
	}
	return "";
}


UPackage* VRM4U_CreatePackage(UPackage* Outer, FName Name) {
	UPackage* pkg = Outer;
	if (Outer != GetTransientPackage()) {
		FString s = Outer->GetPathName();
		FString s1, s2;
		s.Split(TEXT("/"), &s1, &s2, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

#if	UE_VERSION_OLDER_THAN(4,26,0)
		pkg = CreatePackage(nullptr, *(s1 + TEXT("/") + Name.ToString()));
#else
		pkg = CreatePackage(*(s1 + TEXT("/") + Name.ToString()));
#endif
	}
	return pkg;
}





///

template<typename T1>
static void copyVector(VRM::vec4 &v, const T1& t) {
	v[0] = t[0].GetFloat();
	v[1] = t[1].GetFloat();
	v[2] = t[2].GetFloat();
	if (t.Size() > 3) {
		v[3] = t[3].GetFloat();
	} else {
		v[3] = 1.f;
	}
}

bool VRMConverter::GetMatParam(VRM::VRMMaterial &m, int matNo) const {

	if (VRMConverter::Options::Get().IsVRM0Model()) {
		const VRM::VRMMetadata* meta = static_cast<const VRM::VRMMetadata*>(aiData->mVRMMeta);
		if (matNo >= meta->materialNum) {
			return false;
		}
		m.CopyFrom(meta->material[matNo]);
		return true;
	}

	memset(&m.floatProperties, 0, sizeof(m.floatProperties));
	memset(&m.textureProperties, 0, sizeof(m.textureProperties));
	memset(&m.vectorProperties, 0, sizeof(m.vectorProperties));

	m.vectorProperties._Color[0] = 1.f;
	m.vectorProperties._Color[1] = 1.f;
	m.vectorProperties._Color[2] = 1.f;
	m.vectorProperties._Color[3] = 1.f;
	m.vectorProperties._ShadeColor[0] = 1.f;
	m.vectorProperties._ShadeColor[1] = 1.f;
	m.vectorProperties._ShadeColor[2] = 1.f;
	m.vectorProperties._ShadeColor[3] = 1.f;

	m.vectorProperties._OutlineColor[0] = 0.f;
	m.vectorProperties._OutlineColor[1] = 0.f;
	m.vectorProperties._OutlineColor[2] = 0.f;
	m.vectorProperties._OutlineColor[3] = 1.f;

	m.floatProperties._BumpScale = 1.f;
	m.floatProperties._ReceiveShadowRate = 1.f;
	m.floatProperties._OutlineLightingMix = 1.f;
	m.floatProperties._OutlineWidth = 0.1f;
	m.floatProperties._OutlineWidthMode = 1.f;

	m.textureProperties._MainTex = -1;
	m.textureProperties._ShadeTexture = -1;
	m.textureProperties._BumpMap = -1;
	m.textureProperties._ReceiveShadowTexture = -1;
	m.textureProperties._ShadingGradeTexture = -1;
	m.textureProperties._RimTexture = -1;
	m.textureProperties._SphereAdd = -1;
	m.textureProperties._EmissionMap = -1;
	m.textureProperties._OutlineWidthTexture = -1;
	m.textureProperties._UvAnimMaskTexture = -1;

	if (jsonData.doc.HasMember("materials") == false) {
		return true;
	}
	if (jsonData.doc["materials"].IsArray() == false) {
		return true;
	}
	auto& mat = jsonData.doc["materials"].GetArray()[matNo];

	m.name = mat["name"].GetString();

	// float
	{
		//auto t = mat["pbrMetallicRoughness"]["baseColorFactor"].GetArray();
		//m.floatProperties._Color, t);

		//m.floatProperties._Cutoff;
		m.floatProperties._BumpScale = 1.f;
		m.floatProperties._ReceiveShadowRate = 1.f;
		m.floatProperties._ShadeShift			= mat["extensions"]["VRMC_materials_mtoon"]["shadingShiftFactor"].GetFloat();
		m.floatProperties._ShadeToony			= mat["extensions"]["VRMC_materials_mtoon"]["shadingToonyFactor"].GetFloat();
		//m.floatProperties._LightColorAttenuation;
		//m.floatProperties._IndirectLightIntensity;
		m.floatProperties._RimLightingMix		= mat["extensions"]["VRMC_materials_mtoon"]["rimLightingMixFactor"].GetFloat();
		m.floatProperties._RimFresnelPower		= mat["extensions"]["VRMC_materials_mtoon"]["parametricRimFresnelPowerFactor"].GetFloat();
		m.floatProperties._RimLift = mat["extensions"]["VRMC_materials_mtoon"]["parametricRimLiftFactor"].GetFloat();
		m.floatProperties._OutlineWidth = mat["extensions"]["VRMC_materials_mtoon"]["outlineWidthFactor"].GetFloat() * 100.f;
		//m.floatProperties._OutlineScaledMaxDistance;
		m.floatProperties._OutlineLightingMix = mat["extensions"]["VRMC_materials_mtoon"]["outlineLightingMixFactor"].GetFloat();
		m.floatProperties._UvAnimScrollX = mat["extensions"]["VRMC_materials_mtoon"]["uvAnimationScrollXSpeedFactor"].GetFloat();
		m.floatProperties._UvAnimScrollY = mat["extensions"]["VRMC_materials_mtoon"]["uvAnimationScrollYSpeedFactor"].GetFloat();
		m.floatProperties._UvAnimRotation = mat["extensions"]["VRMC_materials_mtoon"]["uvAnimationRotationSpeedFactor"].GetFloat();
		//m.floatProperties._MToonVersion;
		//m.floatProperties._DebugMode;
		//m.floatProperties._BlendMode;
		m.floatProperties._OutlineWidthMode = 1.f;
		{
			FString s = mat["extensions"]["VRMC_materials_mtoon"]["outlineWidthMode"].GetString();
			if (s == "none") {
				m.floatProperties._OutlineWidthMode = 0.f;
				m.floatProperties._OutlineWidth = 0;
			}
		}
		//m.floatProperties._OutlineColorMode;
		//m.floatProperties._CullMode;
		//m.floatProperties._OutlineCullMode;
		//m.floatProperties._SrcBlend;
		//m.floatProperties._DstBlend;
		m.floatProperties._ZWrite = mat["extensions"]["VRMC_materials_mtoon"]["transparentWithZWrite"].GetBool() ? 1.f : 0.f;
	}

	// vector
	{
		{
			auto t = mat["pbrMetallicRoughness"]["baseColorFactor"].GetArray();
			copyVector(m.vectorProperties._Color, t);
		}
		{
			auto t = mat["extensions"]["VRMC_materials_mtoon"]["shadeColorFactor"].GetArray();
			if (t.Size()) {
				copyVector(m.vectorProperties._ShadeColor, t);
				m.vectorProperties._ShadeColor[3] = m.vectorProperties._Color[3];
			}
		}
		{
			auto t = mat["extensions"]["VRMC_materials_mtoon"]["parametricRimColorFactor"].GetArray();
			if (t.Size()) {
				copyVector(m.vectorProperties._RimColor, t);
			}
		}
		{
			auto t = mat["emissiveFactor"].GetArray();
			if (t.Size()) {
				copyVector(m.vectorProperties._EmissionColor, t);
			}
		}
		{
			auto t = mat["extensions"]["VRMC_materials_mtoon"]["outlineColorFactor"].GetArray();
			if (t.Size()) {
				copyVector(m.vectorProperties._OutlineColor, t);
			}
		}
	}

	return true;
}
