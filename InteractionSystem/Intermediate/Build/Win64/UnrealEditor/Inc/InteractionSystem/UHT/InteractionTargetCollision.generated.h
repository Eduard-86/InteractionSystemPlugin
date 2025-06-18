// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetCollision/InteractionTargetCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONSYSTEM_InteractionTargetCollision_generated_h
#error "InteractionTargetCollision.generated.h already included, missing '#pragma once' in InteractionTargetCollision.h"
#endif
#define INTERACTIONSYSTEM_InteractionTargetCollision_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionTargetCollision(); \
	friend struct Z_Construct_UClass_UInteractionTargetCollision_Statics; \
public: \
	DECLARE_CLASS(UInteractionTargetCollision, UInteractionTargetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionTargetCollision)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionTargetCollision(UInteractionTargetCollision&&); \
	UInteractionTargetCollision(const UInteractionTargetCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionTargetCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionTargetCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionTargetCollision) \
	NO_API virtual ~UInteractionTargetCollision();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_21_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_24_INCLASS_NO_PURE_DECLS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UInteractionTargetCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h


#define FOREACH_ENUM_ECOLLISIONINTERACTIONTYPE(op) \
	op(ECollisionInteractionType::CreateSphere) \
	op(ECollisionInteractionType::UseChild) \
	op(ECollisionInteractionType::UseParent) \
	op(ECollisionInteractionType::ManualAttachment) 

enum class ECollisionInteractionType : uint8;
template<> struct TIsUEnumClass<ECollisionInteractionType> { enum { Value = true }; };
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<ECollisionInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
