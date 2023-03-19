// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLScreenCapture/Public/OWLScreenCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLScreenCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	OWLSCREENCAPTURE_API UClass* Z_Construct_UClass_AOWLScreenCapture();
	OWLSCREENCAPTURE_API UClass* Z_Construct_UClass_AOWLScreenCapture_NoRegister();
	OWLSCREENCAPTURE_API UEnum* Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType();
	UPackage* Z_Construct_UPackage__Script_OWLScreenCapture();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLScreenCaptureType;
	static UEnum* EOWLScreenCaptureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType, Z_Construct_UPackage__Script_OWLScreenCapture(), TEXT("EOWLScreenCaptureType"));
		}
		return Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton;
	}
	template<> OWLSCREENCAPTURE_API UEnum* StaticEnum<EOWLScreenCaptureType>()
	{
		return EOWLScreenCaptureType_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators[] = {
		{ "EOWLScreenCaptureType::SCT_Monitor", (int64)EOWLScreenCaptureType::SCT_Monitor },
		{ "EOWLScreenCaptureType::SCT_Window", (int64)EOWLScreenCaptureType::SCT_Window },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "SCT_Monitor.DisplayName", "Monitor Capture" },
		{ "SCT_Monitor.Name", "EOWLScreenCaptureType::SCT_Monitor" },
		{ "SCT_Window.DisplayName", "Window Capture" },
		{ "SCT_Window.Name", "EOWLScreenCaptureType::SCT_Window" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLScreenCapture,
		nullptr,
		"EOWLScreenCaptureType",
		"EOWLScreenCaptureType",
		Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType()
	{
		if (!Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton, Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton;
	}
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenCaptureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCaptureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScreenCaptureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureCursor_MetaData[];
#endif
		static void NewProp_CaptureCursor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MonitorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WindowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Watermark_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Watermark;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "// TODO: we should probably add an option for disabling the annoying yellow boarder\n" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "TODO: we should probably add an option for disabling the annoying yellow boarder" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType = { "ScreenCaptureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLScreenCapture, ScreenCaptureType), Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType, METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType_MetaData)) }; // 1399518636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLScreenCapture, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
	};
#endif
	void Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((AOWLScreenCapture*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLScreenCapture), &Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
	};
#endif
	void Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor_SetBit(void* Obj)
	{
		((AOWLScreenCapture*)Obj)->CaptureCursor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor = { "CaptureCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLScreenCapture), &Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_MonitorName_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "// this will be marked hidden by details customisation\n" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "this will be marked hidden by details customisation" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_MonitorName = { "MonitorName", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLScreenCapture, MonitorName), METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_MonitorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_MonitorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_WindowName_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_WindowName = { "WindowName", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLScreenCapture, WindowName), METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_WindowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_WindowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Watermark_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Watermark = { "Watermark", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLScreenCapture, Watermark), Z_Construct_UClass_UOWLWatermark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Watermark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Watermark_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_ScreenCaptureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_MonitorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_WindowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Watermark,
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::EnumInfo[] = {
		{ EOWLScreenCaptureType_StaticEnum, TEXT("EOWLScreenCaptureType"), &Z_Registration_Info_UEnum_EOWLScreenCaptureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1399518636U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLScreenCapture, AOWLScreenCapture::StaticClass, TEXT("AOWLScreenCapture"), &Z_Registration_Info_UClass_AOWLScreenCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLScreenCapture), 1135055788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_2124986817(TEXT("/Script/OWLScreenCapture"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
