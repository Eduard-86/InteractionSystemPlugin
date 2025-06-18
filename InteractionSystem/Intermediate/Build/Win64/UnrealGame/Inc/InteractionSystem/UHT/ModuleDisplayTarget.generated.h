// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetModular/Modules/ModuleDisplayTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionTargetCollisionModular;
class UInteractorComponent;
#ifdef INTERACTIONSYSTEM_ModuleDisplayTarget_generated_h
#error "ModuleDisplayTarget.generated.h already included, missing '#pragma once' in ModuleDisplayTarget.h"
#endif
#define INTERACTIONSYSTEM_ModuleDisplayTarget_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularDisplaySettings(); \
	friend struct Z_Construct_UClass_UModularDisplaySettings_Statics; \
public: \
	DECLARE_CLASS(UModularDisplaySettings, UModularSettingsBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UModularDisplaySettings)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularDisplaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularDisplaySettings(UModularDisplaySettings&&); \
	UModularDisplaySettings(const UModularDisplaySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularDisplaySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularDisplaySettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularDisplaySettings) \
	NO_API virtual ~UModularDisplaySettings();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_10_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_13_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UModularDisplaySettings>();

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisplayTick); \
	DECLARE_FUNCTION(execOwnInteractorEndOvelrap); \
	DECLARE_FUNCTION(execOwnInteractorBeginOvelrap); \
	DECLARE_FUNCTION(execFocusLose); \
	DECLARE_FUNCTION(execFocusGet);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_CALLBACK_WRAPPERS
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModuleDisplayTarget(); \
	friend struct Z_Construct_UClass_UModuleDisplayTarget_Statics; \
public: \
	DECLARE_CLASS(UModuleDisplayTarget, UModuleBaseTarget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UModuleDisplayTarget)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModuleDisplayTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModuleDisplayTarget(UModuleDisplayTarget&&); \
	UModuleDisplayTarget(const UModuleDisplayTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModuleDisplayTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModuleDisplayTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModuleDisplayTarget) \
	NO_API virtual ~UModuleDisplayTarget();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_25_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_CALLBACK_WRAPPERS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UModuleDisplayTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
