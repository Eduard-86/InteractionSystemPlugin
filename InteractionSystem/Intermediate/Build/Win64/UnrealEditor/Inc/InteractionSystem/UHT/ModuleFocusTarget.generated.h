// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetModular/Modules/ModuleFocusTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractorComponent;
#ifdef INTERACTIONSYSTEM_ModuleFocusTarget_generated_h
#error "ModuleFocusTarget.generated.h already included, missing '#pragma once' in ModuleFocusTarget.h"
#endif
#define INTERACTIONSYSTEM_ModuleFocusTarget_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSettings(); \
	friend struct Z_Construct_UClass_UModularSettings_Statics; \
public: \
	DECLARE_CLASS(UModularSettings, UModularSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UModularSettings)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularSettings(UModularSettings&&); \
	UModularSettings(const UModularSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSettings) \
	NO_API virtual ~UModularSettings();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_17_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_20_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UModularSettings>();

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFocus);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_CALLBACK_WRAPPERS
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModuleFocusTarget(); \
	friend struct Z_Construct_UClass_UModuleFocusTarget_Statics; \
public: \
	DECLARE_CLASS(UModuleFocusTarget, UModuleBaseTarget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UModuleFocusTarget)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModuleFocusTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModuleFocusTarget(UModuleFocusTarget&&); \
	UModuleFocusTarget(const UModuleFocusTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModuleFocusTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModuleFocusTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModuleFocusTarget) \
	NO_API virtual ~UModuleFocusTarget();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_43_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_CALLBACK_WRAPPERS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UModuleFocusTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h


#define FOREACH_ENUM_ELOGICFOCUSTYPE(op) \
	op(ELogicFocusType::Standard) \
	op(ELogicFocusType::HalfLogical) \
	op(ELogicFocusType::Logical) 

enum class ELogicFocusType : uint8;
template<> struct TIsUEnumClass<ELogicFocusType> { enum { Value = true }; };
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<ELogicFocusType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
