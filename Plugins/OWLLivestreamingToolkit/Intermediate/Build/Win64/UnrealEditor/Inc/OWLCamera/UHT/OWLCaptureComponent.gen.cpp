// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLCamera/Public/OWLCaptureComponent.h"
#include "Engine/Classes/Components/SceneCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCaptureComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent();
	OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLCamera();
// End Cross Module References
	DEFINE_FUNCTION(UOWLCaptureComponent::execGetCurrentUMGWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetCurrentUMGWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execClearHiddenComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHiddenComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execClearShowOnlyComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearShowOnlyComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execRemoveShowOnlyActorComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execRemoveShowOnlyComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveShowOnlyComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execShowOnlyActorComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execShowOnlyComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOnlyComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execHideActorComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execHideComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLCaptureComponent::execGetTargetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetTargetCamera();
		P_NATIVE_END;
	}
	void UOWLCaptureComponent::StaticRegisterNativesUOWLCaptureComponent()
	{
		UClass* Class = UOWLCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHiddenComponents", &UOWLCaptureComponent::execClearHiddenComponents },
			{ "ClearShowOnlyComponents", &UOWLCaptureComponent::execClearShowOnlyComponents },
			{ "GetCurrentUMGWidget", &UOWLCaptureComponent::execGetCurrentUMGWidget },
			{ "GetTargetCamera", &UOWLCaptureComponent::execGetTargetCamera },
			{ "HideActorComponents", &UOWLCaptureComponent::execHideActorComponents },
			{ "HideComponent", &UOWLCaptureComponent::execHideComponent },
			{ "RemoveShowOnlyActorComponents", &UOWLCaptureComponent::execRemoveShowOnlyActorComponents },
			{ "RemoveShowOnlyComponent", &UOWLCaptureComponent::execRemoveShowOnlyComponent },
			{ "ShowOnlyActorComponents", &UOWLCaptureComponent::execShowOnlyActorComponents },
			{ "ShowOnlyComponent", &UOWLCaptureComponent::execShowOnlyComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Clears the hidden list. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Clears the hidden list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ClearHiddenComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Clears the Show Only list. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Clears the Show Only list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ClearShowOnlyComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics
	{
		struct OWLCaptureComponent_eventGetCurrentUMGWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventGetCurrentUMGWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMGRendering" },
		{ "Comment", "/** Get Current UMG Widget\n\x09 * WARNING: might return nullptr if the WidgetType is not set */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Get Current UMG Widget\nWARNING: might return nullptr if the WidgetType is not set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "GetCurrentUMGWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::OWLCaptureComponent_eventGetCurrentUMGWidget_Parms), Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics
	{
		struct OWLCaptureComponent_eventGetTargetCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventGetTargetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "GetTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::OWLCaptureComponent_eventGetTargetCamera_Parms), Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics
	{
		struct OWLCaptureComponent_eventHideActorComponents_Parms
		{
			AActor* InActor;
			bool bIncludeFromChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[];
#endif
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventHideActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((OWLCaptureComponent_eventHideActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLCaptureComponent_eventHideActorComponents_Parms), &Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/**\n\x09 * Adds all primitive components in the actor to our list of hidden components.\n\x09 * @param bIncludeFromChildActors Whether to include the components from child actors\n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of hidden components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "HideActorComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::OWLCaptureComponent_eventHideActorComponents_Parms), Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics
	{
		struct OWLCaptureComponent_eventHideComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventHideComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Adds the component to our list of hidden components. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of hidden components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "HideComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::OWLCaptureComponent_eventHideComponent_Parms), Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_HideComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics
	{
		struct OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms
		{
			AActor* InActor;
			bool bIncludeFromChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[];
#endif
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), &Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/**\n\x09* Removes an actor's components from the Show Only list.\n\x09* @param bIncludeFromChildActors Whether to remove the components from child actors\n\x09*/" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Removes an actor's components from the Show Only list.\n@param bIncludeFromChildActors Whether to remove the components from child actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "RemoveShowOnlyActorComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics
	{
		struct OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Removes a component from the Show Only list. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Removes a component from the Show Only list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "RemoveShowOnlyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms), Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics
	{
		struct OWLCaptureComponent_eventShowOnlyActorComponents_Parms
		{
			AActor* InActor;
			bool bIncludeFromChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[];
#endif
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((OWLCaptureComponent_eventShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLCaptureComponent_eventShowOnlyActorComponents_Parms), &Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/**\n\x09* Adds all primitive components in the actor to our list of show-only components.\n\x09* @param bIncludeFromChildActors Whether to include the components from child actors\n\x09*/" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of show-only components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ShowOnlyActorComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::OWLCaptureComponent_eventShowOnlyActorComponents_Parms), Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics
	{
		struct OWLCaptureComponent_eventShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLCaptureComponent_eventShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Adds the component to our list of show-only components. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of show-only components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ShowOnlyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::OWLCaptureComponent_eventShowOnlyComponent_Parms), Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLCaptureComponent);
	UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister()
	{
		return UOWLCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOWLCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResolutionY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseRendering_MetaData[];
#endif
		static void NewProp_PauseRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderHUD_MetaData[];
#endif
		static void NewProp_RenderHUD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseShowOnlyList_MetaData[];
#endif
		static void NewProp_UseShowOnlyList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseShowOnlyList;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShowOnlyComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvertAlpha_MetaData[];
#endif
		static void NewProp_InvertAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCameraMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Watermark_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Watermark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWLCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents, "ClearHiddenComponents" }, // 4170764020
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents, "ClearShowOnlyComponents" }, // 3642115735
		{ &Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget, "GetCurrentUMGWidget" }, // 413252303
		{ &Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera, "GetTargetCamera" }, // 1962221280
		{ &Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents, "HideActorComponents" }, // 2795762974
		{ &Z_Construct_UFunction_UOWLCaptureComponent_HideComponent, "HideComponent" }, // 3789283875
		{ &Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents, "RemoveShowOnlyActorComponents" }, // 1317499346
		{ &Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent, "RemoveShowOnlyComponent" }, // 2118879762
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents, "ShowOnlyActorComponents" }, // 850504530
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent, "ShowOnlyComponent" }, // 3602010018
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Collision Object Physics SceneComponent Mobility Tags Activation Cooking Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "OWLCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Render target to render into and send to Spout\n\x09* If left unset the render target will be generated automatically\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Render target to render into and send to Spout\nIf left unset the render target will be generated automatically" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Min: 64px, Max: 7680\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Min: 64px, Max: 7680" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, ResolutionX), METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Min: 64px, Max: 4320\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Min: 64px, Max: 4320" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, ResolutionY), METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(nullptr, 0) }; // 2639744659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, ShowFlagSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData)) }; // 2639744659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/** Tick if you want to pause rendering to the render target */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Tick if you want to pause rendering to the render target" },
	};
#endif
	void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_SetBit(void* Obj)
	{
		((UOWLCaptureComponent*)Obj)->PauseRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering = { "PauseRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|UMG Rendering" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_SetBit(void* Obj)
	{
		((UOWLCaptureComponent*)Obj)->RenderHUD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD = { "RenderHUD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|UMG Rendering" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender = { "WidgetToRender", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, WidgetToRender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** Tick if you want to render selected primitives only */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Tick if you want to render selected primitives only" },
	};
#endif
	void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_SetBit(void* Obj)
	{
		((UOWLCaptureComponent*)Obj)->UseShowOnlyList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList = { "UseShowOnlyList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_Inner = { "HiddenComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_MetaData[] = {
		{ "Comment", "/** The components won't rendered by current component.*/" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The components won't rendered by current component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents = { "HiddenComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, HiddenComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** The actors to hide in the scene capture. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The actors to hide in the scene capture." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData[] = {
		{ "Comment", "/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, ShowOnlyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** By default we invert the ue4's default alpha value of captured textures - you can disable it here */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "By default we invert the ue4's default alpha value of captured textures - you can disable it here" },
	};
#endif
	void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_SetBit(void* Obj)
	{
		((UOWLCaptureComponent*)Obj)->InvertAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha = { "InvertAlpha", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, LODDistanceFactor), METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
		{ "UIMax", "10000" },
		{ "UIMin", "100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride = { "MaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, MaxViewDistanceOverride), METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT = { "InternalRT", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, InternalRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh = { "CineCameraMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, CineCameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_Watermark_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_Watermark = { "Watermark", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLCaptureComponent, Watermark), Z_Construct_UClass_UOWLWatermark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_Watermark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_Watermark_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_Watermark,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLCaptureComponent_Statics::ClassParams = {
		&UOWLCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UOWLCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLCaptureComponent.OuterSingleton, Z_Construct_UClass_UOWLCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLCaptureComponent.OuterSingleton;
	}
	template<> OWLCAMERA_API UClass* StaticClass<UOWLCaptureComponent>()
	{
		return UOWLCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLCaptureComponent);
	UOWLCaptureComponent::~UOWLCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLCaptureComponent, UOWLCaptureComponent::StaticClass, TEXT("UOWLCaptureComponent"), &Z_Registration_Info_UClass_UOWLCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLCaptureComponent), 2669828250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_3437799710(TEXT("/Script/OWLCamera"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
