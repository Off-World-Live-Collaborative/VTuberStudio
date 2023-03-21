// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLScreenCapture/Public/OWLScreenCapture.h"
#include "OWLScreenCapture/Public/OWLScreenCapturer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLScreenCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OWLSCREENCAPTURE_API UClass* Z_Construct_UClass_AOWLScreenCapture();
	OWLSCREENCAPTURE_API UClass* Z_Construct_UClass_AOWLScreenCapture_NoRegister();
	OWLSCREENCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions();
	UPackage* Z_Construct_UPackage__Script_OWLScreenCapture();
// End Cross Module References
	void AOWLScreenCapture::StaticRegisterNativesAOWLScreenCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLScreenCapture);
	UClass* Z_Construct_UClass_AOWLScreenCapture_NoRegister()
	{
		return AOWLScreenCapture::StaticClass();
	}
	struct Z_Construct_UClass_AOWLScreenCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLScreenCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLScreenCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLScreenCapture.h" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "// TODO: we should probably add an option for disabling the annoying yellow boarder\n" },
		{ "DisplayName", "Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "TODO: we should probably add an option for disabling the annoying yellow boarder" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLScreenCapture, Options), Z_Construct_UScriptStruct_FOWLScreenCaptureOptions, METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options_MetaData)) }; // 4124855380
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLScreenCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLScreenCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLScreenCapture_Statics::ClassParams = {
		&AOWLScreenCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLScreenCapture()
	{
		if (!Z_Registration_Info_UClass_AOWLScreenCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLScreenCapture.OuterSingleton, Z_Construct_UClass_AOWLScreenCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLScreenCapture.OuterSingleton;
	}
	template<> OWLSCREENCAPTURE_API UClass* StaticClass<AOWLScreenCapture>()
	{
		return AOWLScreenCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLScreenCapture);
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLScreenCapture, AOWLScreenCapture::StaticClass, TEXT("AOWLScreenCapture"), &Z_Registration_Info_UClass_AOWLScreenCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLScreenCapture), 171327251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_3520765386(TEXT("/Script/OWLScreenCapture"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
