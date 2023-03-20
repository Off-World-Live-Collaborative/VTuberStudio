// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Private/OWLUIInputPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLUIInputPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLUIInputPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLUIInputPass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void UOWLUIInputPass::StaticRegisterNativesUOWLUIInputPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLUIInputPass);
	UClass* Z_Construct_UClass_UOWLUIInputPass_NoRegister()
	{
		return UOWLUIInputPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLUIInputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Watermark_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Watermark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLUIInputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLUIInputPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/OWLUIInputPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Private/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Private/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution = { "RenderResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, RenderResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Private/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender = { "WidgetToRender", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, WidgetToRender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_Watermark_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_Watermark = { "Watermark", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, Watermark), Z_Construct_UClass_UOWLWatermark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_Watermark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_Watermark_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_Watermark,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLUIInputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLUIInputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLUIInputPass_Statics::ClassParams = {
		&UOWLUIInputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLUIInputPass()
	{
		if (!Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton, Z_Construct_UClass_UOWLUIInputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLUIInputPass>()
	{
		return UOWLUIInputPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLUIInputPass);
	UOWLUIInputPass::~UOWLUIInputPass() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Private_OWLUIInputPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Private_OWLUIInputPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLUIInputPass, UOWLUIInputPass::StaticClass, TEXT("UOWLUIInputPass"), &Z_Registration_Info_UClass_UOWLUIInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLUIInputPass), 4015344194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Private_OWLUIInputPass_h_1419459148(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Private_OWLUIInputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Private_OWLUIInputPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
