// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONSYSTEM_InteractionCondition_generated_h
#error "InteractionCondition.generated.h already included, missing '#pragma once' in InteractionCondition.h"
#endif
#define INTERACTIONSYSTEM_InteractionCondition_generated_h

#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIONSYSTEM_API UInteractionCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionCondition(UInteractionCondition&&); \
	UInteractionCondition(const UInteractionCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIONSYSTEM_API, UInteractionCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionCondition) \
	INTERACTIONSYSTEM_API virtual ~UInteractionCondition();


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionCondition(); \
	friend struct Z_Construct_UClass_UInteractionCondition_Statics; \
public: \
	DECLARE_CLASS(UInteractionCondition, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractionSystem"), INTERACTIONSYSTEM_API) \
	DECLARE_SERIALIZER(UInteractionCondition)


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_GENERATED_UINTERFACE_BODY() \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionCondition() {} \
public: \
	typedef UInteractionCondition UClassType; \
	typedef IInteractionCondition ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_5_PROLOG
#define FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UInteractionCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
