// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetModular/Modules/ModuleBaseTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionTargetCollisionModular;
class UModularSettingsBase;
#ifdef INTERACTIONSYSTEM_ModuleBaseTarget_generated_h
#error "ModuleBaseTarget.generated.h already included, missing '#pragma once' in ModuleBaseTarget.h"
#endif
#define INTERACTIONSYSTEM_ModuleBaseTarget_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSettingsBase(); \
	friend struct Z_Construct_UClass_UModularSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UModularSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UModularSettingsBase)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularSettingsBase(UModularSettingsBase&&); \
	UModularSettingsBase(const UModularSettingsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSettingsBase) \
	NO_API virtual ~UModularSettingsBase();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_13_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_16_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UModularSettingsBase>();

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteActionEvent); \
	DECLARE_FUNCTION(execGetEnableFocus); \
	DECLARE_FUNCTION(execSetEnableFocus);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_CALLBACK_WRAPPERS
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModuleBaseTarget(); \
	friend struct Z_Construct_UClass_UModuleBaseTarget_Statics; \
public: \
	DECLARE_CLASS(UModuleBaseTarget, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UModuleBaseTarget)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModuleBaseTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModuleBaseTarget(UModuleBaseTarget&&); \
	UModuleBaseTarget(const UModuleBaseTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModuleBaseTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModuleBaseTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModuleBaseTarget) \
	NO_API virtual ~UModuleBaseTarget();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_22_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_CALLBACK_WRAPPERS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UModuleBaseTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
