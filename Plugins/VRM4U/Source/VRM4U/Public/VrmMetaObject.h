// VRM4U Copyright (c) 2021-2022 Haruyoshi Yamamoto. This software is released under the MIT License.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VrmMetaObject.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMSpringMeta{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float stiffness = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float gravityPower = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVector gravityDir = { 0,-1,0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float dragForce = 0.4f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float hitRadius = 0.f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	//int boneNum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<int> bones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FString> boneNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<int> ColliderIndexArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<int> ColliderGroupArrayVRM10; // for datacheck
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMSpringColliderData {
	GENERATED_BODY()
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FName shapeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVector offset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float radius = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVector tail = FVector::ZeroVector;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMColliderGroupMeta {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString groupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<int> colliderGroup;
};


USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMColliderMeta {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int bone = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString boneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMSpringColliderData> collider;
};


// BlendShape
USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVrmBlendShape{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString morphTargetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString nodeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString meshName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int meshID=0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int shapeIndex=0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int weight=100;
};

// BlendShape Material
USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVrmBlendShapeMaterialList {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
		FString materialName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
		FString propertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
		FLinearColor color = FLinearColor::Black;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVrmBlendShapeGroup {
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVrmBlendShape> BlendShape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVrmBlendShapeMaterialList> MaterialList;

	// vrm10
	bool isBinary = false;
	// none, block, blend
	FString overrideBlink;
	FString overrideLookAt;
	FString overrideMouth;

};

//struct VRM4U_API FBVrmlendShapeGroup {
//	TArray<FVrmBlendShape> 
//};

UENUM(BlueprintType)
enum class EVRMConstraintType : uint8 {
	None, Roll, Aim, Rotation,
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMConstraintRoll {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString sourceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int source = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString rollAxis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float weight = 1.f;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMConstraintAim {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString sourceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int source = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString aimAxis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float weight = 1.f;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMConstraintRotation {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString sourceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int source = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float weight = 1.f;
};


USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMConstraint {
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	EVRMConstraintType type = EVRMConstraintType::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVRMConstraintRoll constraintRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVRMConstraintAim constraintAim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVRMConstraintRotation constraintRotation;
};


UCLASS(Blueprintable, BlueprintType)
class VRM4U_API UVrmMetaObject : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int Version = 0;

	UFUNCTION(BlueprintPure, Category = "VRM4U")
	int GetVRMVersion() const {
		return Version;
	}

	// humanoid name -> model name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TMap<FString, FString> humanoidBoneTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVrmBlendShapeGroup> BlendShapeGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMSpringMeta> VRMSpringMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMColliderMeta> VRMColliderMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMColliderGroupMeta> VRMColliderGroupMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TMap<FString, FVRMConstraint> VRMConstraintMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	class USkeletalMesh *SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	class UVrmAssetListObject *VrmAssetListObject;


};
