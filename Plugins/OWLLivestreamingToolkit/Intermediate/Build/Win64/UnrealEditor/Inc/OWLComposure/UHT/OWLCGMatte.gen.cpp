// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLCGMatte.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCGMatte() {}
// Cross Module References
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGMatte();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGMatte_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void AOWLCGMatte::StaticRegisterNativesAOWLCGMatte()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLCGMatte);
	UClass* Z_Construct_UClass_AOWLCGMatte_NoRegister()
	{
		return AOWLCGMatte::StaticClass();
	}
	struct Z_Construct_UClass_AOWLCGMatte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLCGMatte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOWLCGElement,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGMatte_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OWL Composure" },
		{ "IncludePath", "OWLCGMatte.h" },
		{ "ModuleRelativePath", "Public/OWLCGMatte.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLCGMatte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLCGMatte>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLCGMatte_Statics::ClassParams = {
		&AOWLCGMatte::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLCGMatte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGMatte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLCGMatte()
	{
		if (!Z_Registration_Info_UClass_AOWLCGMatte.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLCGMatte.OuterSingleton, Z_Construct_UClass_AOWLCGMatte_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLCGMatte.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<AOWLCGMatte>()
	{
		return AOWLCGMatte::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLCGMatte);
	AOWLCGMatte::~AOWLCGMatte() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLCGMatte, AOWLCGMatte::StaticClass, TEXT("AOWLCGMatte"), &Z_Registration_Info_UClass_AOWLCGMatte, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLCGMatte), 2424425904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_1571432772(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
