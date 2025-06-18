// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionTargetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInteractorComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INTERACTIONSYSTEM_InteractionTargetComponent_generated_h
#error "InteractionTargetComponent.generated.h already included, missing '#pragma once' in InteractionTargetComponent.h"
#endif
#define INTERACTIONSYSTEM_InteractionTargetComponent_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_15_DELEGATE \
INTERACTIONSYSTEM_API void FInteractionTargetEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InteractionTargetEventSignature, const UInteractorComponent* InteractorComponent);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_19_DELEGATE \
INTERACTIONSYSTEM_API void FOnInteractSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractSignature, UInteractorComponent* InteractorComponent);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReattachParentCollision); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execGetInteractiorActivityState); \
	DECLARE_FUNCTION(execSetInteractorActivityState); \
	DECLARE_FUNCTION(execWantFocus);


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_CALLBACK_WRAPPERS
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionTargetComponent(); \
	friend struct Z_Construct_UClass_UInteractionTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionTargetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionTargetComponent)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionTargetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionTargetComponent(UInteractionTargetComponent&&); \
	UInteractionTargetComponent(const UInteractionTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionTargetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionTargetComponent) \
	NO_API virtual ~UInteractionTargetComponent();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_52_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_CALLBACK_WRAPPERS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UInteractionTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h


#define FOREACH_ENUM_EKEYINTERACTIONTYPE(op) \
	op(EKeyInteractionType::OneClick) \
	op(EKeyInteractionType::NeedPress) 

enum class EKeyInteractionType : uint8;
template<> struct TIsUEnumClass<EKeyInteractionType> { enum { Value = true }; };
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<EKeyInteractionType>();

#define FOREACH_ENUM_ESTARTINTERACTTYPE(op) \
	op(EStartInteractType::KeyInput) \
	op(EStartInteractType::BeginObserving) \
	op(EStartInteractType::GetFocus) 

enum class EStartInteractType : uint8;
template<> struct TIsUEnumClass<EStartInteractType> { enum { Value = true }; };
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<EStartInteractType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
