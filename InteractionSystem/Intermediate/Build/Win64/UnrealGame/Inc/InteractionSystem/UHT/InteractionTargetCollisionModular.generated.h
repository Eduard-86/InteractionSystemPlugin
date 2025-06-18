// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetModular/InteractionTargetCollisionModular.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractorComponent;
class UModuleDisplayTarget;
class UModuleFocusTarget;
#ifdef INTERACTIONSYSTEM_InteractionTargetCollisionModular_generated_h
#error "InteractionTargetCollisionModular.generated.h already included, missing '#pragma once' in InteractionTargetCollisionModular.h"
#endif
#define INTERACTIONSYSTEM_InteractionTargetCollisionModular_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLoseSightModule); \
	DECLARE_FUNCTION(execGetNoticedModule); \
	DECLARE_FUNCTION(execLoseFocusModule); \
	DECLARE_FUNCTION(execGetFocusModule); \
	DECLARE_FUNCTION(execGetFunctionalModuleByClass); \
	DECLARE_FUNCTION(execGetFocusModuleByClass); \
	DECLARE_FUNCTION(execGetFunctionalModules); \
	DECLARE_FUNCTION(execGetFocusModules); \
	DECLARE_FUNCTION(execCreateModules);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionTargetCollisionModular(); \
	friend struct Z_Construct_UClass_UInteractionTargetCollisionModular_Statics; \
public: \
	DECLARE_CLASS(UInteractionTargetCollisionModular, UInteractionTargetCollision, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionTargetCollisionModular)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionTargetCollisionModular(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionTargetCollisionModular(UInteractionTargetCollisionModular&&); \
	UInteractionTargetCollisionModular(const UInteractionTargetCollisionModular&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionTargetCollisionModular); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionTargetCollisionModular); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionTargetCollisionModular) \
	NO_API virtual ~UInteractionTargetCollisionModular();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_18_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UInteractionTargetCollisionModular>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
