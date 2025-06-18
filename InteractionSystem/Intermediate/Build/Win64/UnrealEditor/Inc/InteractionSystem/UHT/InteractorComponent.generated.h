// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
class UInteractionTargetComponent;
#ifdef INTERACTIONSYSTEM_InteractorComponent_generated_h
#error "InteractorComponent.generated.h already included, missing '#pragma once' in InteractorComponent.h"
#endif
#define INTERACTIONSYSTEM_InteractorComponent_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_12_DELEGATE \
INTERACTIONSYSTEM_API void FOnInteractionTargetBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionTargetBeginOverlapSignature, const UInteractionTargetComponent* InteractionTarget);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_18_DELEGATE \
INTERACTIONSYSTEM_API void FOnInteractionTargetEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionTargetEndOverlapSignature, const UInteractionTargetComponent* InteractionTarget);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_24_DELEGATE \
INTERACTIONSYSTEM_API void FOnInteractionStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionStartedSignature, const UInteractionTargetComponent* InteractionTarget);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_30_DELEGATE \
INTERACTIONSYSTEM_API void FOnInteractionEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionEndedSignature, const UInteractionTargetComponent* InteractionTarget);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFocusTarget); \
	DECLARE_FUNCTION(execUnlockFocusTarget); \
	DECLARE_FUNCTION(execLockFocusTarget); \
	DECLARE_FUNCTION(execPossessedReaction); \
	DECLARE_FUNCTION(execGetPauseInteractionState); \
	DECLARE_FUNCTION(execSetPauseInteractionState); \
	DECLARE_FUNCTION(execGetInteractiorComponentState); \
	DECLARE_FUNCTION(execSetInteractorComponentState); \
	DECLARE_FUNCTION(execAcceptNewInteractable); \
	DECLARE_FUNCTION(execReleasedInteract); \
	DECLARE_FUNCTION(execInteract);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_CALLBACK_WRAPPERS
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractorComponent(); \
	friend struct Z_Construct_UClass_UInteractorComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractorComponent)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractorComponent(UInteractorComponent&&); \
	UInteractorComponent(const UInteractorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractorComponent) \
	NO_API virtual ~UInteractorComponent();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_41_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_CALLBACK_WRAPPERS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UInteractorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
