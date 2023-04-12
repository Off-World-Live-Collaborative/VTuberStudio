// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLPlaneTransformPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLPlaneTransformPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLPlaneTransformPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLPlaneTransformPass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void UOWLPlaneTransformPass::StaticRegisterNativesUOWLPlaneTransformPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLPlaneTransformPass);
	UClass* Z_Construct_UClass_UOWLPlaneTransformPass_NoRegister()
	{
		return UOWLPlaneTransformPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLPlaneTransformPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Plane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeBlur_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLPlaneTransformPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPlaneTransformPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OWLPlaneTransformPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLPlaneTransformPass, RenderScale), METADATA_PARAMS(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/* Set a plane to attach the media plate to in the scene - will take aspect ratio from scale */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Set a plane to attach the media plate to in the scene - will take aspect ratio from scale" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLPlaneTransformPass, Plane), Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/* Set a reference to a camera actor in the scene instead of using the camera inherited from the Composure pass */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Set a reference to a camera actor in the scene instead of using the camera inherited from the Composure pass" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride = { "CameraOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLPlaneTransformPass, CameraOverride), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_EdgeBlur_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "ClampMax", "0.05" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Increase from 0 to soften edges of video */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Increase from 0 to soften edges of video" },
		{ "UIMax", "0.05" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_EdgeBlur = { "EdgeBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLPlaneTransformPass, EdgeBlur), METADATA_PARAMS(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_EdgeBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_EdgeBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Number of frames to run behind. By default, with deferred rendering this is 1 */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Number of frames to run behind. By default, with deferred rendering this is 1" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLPlaneTransformPass, FrameDelay), METADATA_PARAMS(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_EdgeBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLPlaneTransformPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLPlaneTransformPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::ClassParams = {
		&UOWLPlaneTransformPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLPlaneTransformPass()
	{
		if (!Z_Registration_Info_UClass_UOWLPlaneTransformPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLPlaneTransformPass.OuterSingleton, Z_Construct_UClass_UOWLPlaneTransformPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLPlaneTransformPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLPlaneTransformPass>()
	{
		return UOWLPlaneTransformPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLPlaneTransformPass);
	UOWLPlaneTransformPass::~UOWLPlaneTransformPass() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLPlaneTransformPass, UOWLPlaneTransformPass::StaticClass, TEXT("UOWLPlaneTransformPass"), &Z_Registration_Info_UClass_UOWLPlaneTransformPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLPlaneTransformPass), 752224750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_1944837773(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
