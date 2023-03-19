// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCameraComponent;
class UPrimitiveComponent;
class UUserWidget;
#ifdef OWLCAMERA_OWLCaptureComponent_generated_h
#error "OWLCaptureComponent.generated.h already included, missing '#pragma once' in OWLCaptureComponent.h"
#endif
#define OWLCAMERA_OWLCaptureComponent_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_SPARSE_DATA
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentUMGWidget); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent); \
	DECLARE_FUNCTION(execGetTargetCamera);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentUMGWidget); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent); \
	DECLARE_FUNCTION(execGetTargetCamera);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_ACCESSORS
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLCaptureComponent(); \
	friend struct Z_Construct_UClass_UOWLCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UOWLCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLCamera"), NO_API) \
	DECLARE_SERIALIZER(UOWLCaptureComponent)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOWLCaptureComponent(); \
	friend struct Z_Construct_UClass_UOWLCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UOWLCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLCamera"), NO_API) \
	DECLARE_SERIALIZER(UOWLCaptureComponent)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWLCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWLCaptureComponent(UOWLCaptureComponent&&); \
	NO_API UOWLCaptureComponent(const UOWLCaptureComponent&); \
public: \
	NO_API virtual ~UOWLCaptureComponent();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWLCaptureComponent(UOWLCaptureComponent&&); \
	NO_API UOWLCaptureComponent(const UOWLCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLCaptureComponent) \
	NO_API virtual ~UOWLCaptureComponent();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_22_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_SPARSE_DATA \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_ACCESSORS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_INCLASS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_SPARSE_DATA \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_ACCESSORS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLCAMERA_API UClass* StaticClass<class UOWLCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
