// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/Tools/OWLWatermark.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLWatermark() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	void UOWLWatermark::StaticRegisterNativesUOWLWatermark()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLWatermark);
	UClass* Z_Construct_UClass_UOWLWatermark_NoRegister()
	{
		return UOWLWatermark::StaticClass();
	}
	struct Z_Construct_UClass_UOWLWatermark_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLWatermark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLWatermark_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tools/OWLWatermark.h" },
		{ "ModuleRelativePath", "Public/Tools/OWLWatermark.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/OWLWatermark.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLWatermark, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLWatermark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLWatermark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLWatermark>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLWatermark_Statics::ClassParams = {
		&UOWLWatermark::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLWatermark_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLWatermark_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLWatermark_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLWatermark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLWatermark()
	{
		if (!Z_Registration_Info_UClass_UOWLWatermark.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLWatermark.OuterSingleton, Z_Construct_UClass_UOWLWatermark_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLWatermark.OuterSingleton;
	}
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLWatermark>()
	{
		return UOWLWatermark::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLWatermark);
	UOWLWatermark::~UOWLWatermark() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLWatermark_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLWatermark_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLWatermark, UOWLWatermark::StaticClass, TEXT("UOWLWatermark"), &Z_Registration_Info_UClass_UOWLWatermark, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLWatermark), 3344866520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLWatermark_h_3855446978(TEXT("/Script/LivestreamingToolkit"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLWatermark_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLWatermark_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
