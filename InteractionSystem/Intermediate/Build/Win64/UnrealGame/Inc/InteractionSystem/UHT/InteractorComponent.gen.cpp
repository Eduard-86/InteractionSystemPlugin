// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/InteractorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent_NoRegister();
INTERACTIONSYSTEM_API UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature();
INTERACTIONSYSTEM_API UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature();
INTERACTIONSYSTEM_API UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature();
INTERACTIONSYSTEM_API UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Delegate FOnInteractionTargetBeginOverlapSignature
struct Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics
{
	struct _Script_InteractionSystem_eventOnInteractionTargetBeginOverlapSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::NewProp_InteractionTarget = { "InteractionTarget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionSystem_eventOnInteractionTargetBeginOverlapSignature_Parms, InteractionTarget), Z_Construct_UClass_UInteractionTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTarget_MetaData), NewProp_InteractionTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::NewProp_InteractionTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem, nullptr, "OnInteractionTargetBeginOverlapSignature__DelegateSignature", "InteractorComponent", "OnInteractionTargetBeginOverlap", Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionTargetBeginOverlapSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionTargetBeginOverlapSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractionTargetBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionTargetBeginOverlapSignature, const UInteractionTargetComponent* InteractionTarget)
{
	struct _Script_InteractionSystem_eventOnInteractionTargetBeginOverlapSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
	_Script_InteractionSystem_eventOnInteractionTargetBeginOverlapSignature_Parms Parms;
	Parms.InteractionTarget=InteractionTarget;
	OnInteractionTargetBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractionTargetBeginOverlapSignature

// Begin Delegate FOnInteractionTargetEndOverlapSignature
struct Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics
{
	struct _Script_InteractionSystem_eventOnInteractionTargetEndOverlapSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::NewProp_InteractionTarget = { "InteractionTarget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionSystem_eventOnInteractionTargetEndOverlapSignature_Parms, InteractionTarget), Z_Construct_UClass_UInteractionTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTarget_MetaData), NewProp_InteractionTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::NewProp_InteractionTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem, nullptr, "OnInteractionTargetEndOverlapSignature__DelegateSignature", "InteractorComponent", "OnInteractionTargetEndOverlap", Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionTargetEndOverlapSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionTargetEndOverlapSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractionTargetEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionTargetEndOverlapSignature, const UInteractionTargetComponent* InteractionTarget)
{
	struct _Script_InteractionSystem_eventOnInteractionTargetEndOverlapSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
	_Script_InteractionSystem_eventOnInteractionTargetEndOverlapSignature_Parms Parms;
	Parms.InteractionTarget=InteractionTarget;
	OnInteractionTargetEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractionTargetEndOverlapSignature

// Begin Delegate FOnInteractionStartedSignature
struct Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics
{
	struct _Script_InteractionSystem_eventOnInteractionStartedSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::NewProp_InteractionTarget = { "InteractionTarget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionSystem_eventOnInteractionStartedSignature_Parms, InteractionTarget), Z_Construct_UClass_UInteractionTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTarget_MetaData), NewProp_InteractionTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::NewProp_InteractionTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem, nullptr, "OnInteractionStartedSignature__DelegateSignature", "InteractorComponent", "OnInteractionStarted", Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionStartedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionStartedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractionStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionStartedSignature, const UInteractionTargetComponent* InteractionTarget)
{
	struct _Script_InteractionSystem_eventOnInteractionStartedSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
	_Script_InteractionSystem_eventOnInteractionStartedSignature_Parms Parms;
	Parms.InteractionTarget=InteractionTarget;
	OnInteractionStartedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractionStartedSignature

// Begin Delegate FOnInteractionEndedSignature
struct Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics
{
	struct _Script_InteractionSystem_eventOnInteractionEndedSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::NewProp_InteractionTarget = { "InteractionTarget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionSystem_eventOnInteractionEndedSignature_Parms, InteractionTarget), Z_Construct_UClass_UInteractionTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTarget_MetaData), NewProp_InteractionTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::NewProp_InteractionTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem, nullptr, "OnInteractionEndedSignature__DelegateSignature", "InteractorComponent", "OnInteractionEnded", Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionEndedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractionEndedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractionEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionEndedSignature, const UInteractionTargetComponent* InteractionTarget)
{
	struct _Script_InteractionSystem_eventOnInteractionEndedSignature_Parms
	{
		const UInteractionTargetComponent* InteractionTarget;
	};
	_Script_InteractionSystem_eventOnInteractionEndedSignature_Parms Parms;
	Parms.InteractionTarget=InteractionTarget;
	OnInteractionEndedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractionEndedSignature

// Begin Class UInteractorComponent Function AcceptNewInteractable
struct InteractorComponent_eventAcceptNewInteractable_Parms
{
	UInteractionTargetComponent* Target;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InteractorComponent_eventAcceptNewInteractable_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UInteractorComponent_AcceptNewInteractable = FName(TEXT("AcceptNewInteractable"));
bool UInteractorComponent::AcceptNewInteractable(UInteractionTargetComponent* Target)
{
	InteractorComponent_eventAcceptNewInteractable_Parms Parms;
	Parms.Target=Target;
	ProcessEvent(FindFunctionChecked(NAME_UInteractorComponent_AcceptNewInteractable),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is wont this InteractorCompinent interact whis this target */" },
#endif
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is wont this InteractorCompinent interact whis this target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventAcceptNewInteractable_Parms, Target), Z_Construct_UClass_UInteractionTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractorComponent_eventAcceptNewInteractable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventAcceptNewInteractable_Parms), &Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "AcceptNewInteractable", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::PropPointers), sizeof(InteractorComponent_eventAcceptNewInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractorComponent_eventAcceptNewInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execAcceptNewInteractable)
{
	P_GET_OBJECT(UInteractionTargetComponent,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AcceptNewInteractable_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UInteractorComponent Function AcceptNewInteractable

// Begin Class UInteractorComponent Function GetFocusTarget
struct Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics
{
	struct InteractorComponent_eventGetFocusTarget_Parms
	{
		UInteractionTargetComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventGetFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UInteractionTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "GetFocusTarget", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::InteractorComponent_eventGetFocusTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::InteractorComponent_eventGetFocusTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_GetFocusTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_GetFocusTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execGetFocusTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInteractionTargetComponent**)Z_Param__Result=P_THIS->GetFocusTarget();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function GetFocusTarget

// Begin Class UInteractorComponent Function GetInteractiorComponentState
struct Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics
{
	struct InteractorComponent_eventGetInteractiorComponentState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Get Is Enabled" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractorComponent_eventGetInteractiorComponentState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventGetInteractiorComponentState_Parms), &Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "GetInteractiorComponentState", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::InteractorComponent_eventGetInteractiorComponentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::InteractorComponent_eventGetInteractiorComponentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execGetInteractiorComponentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInteractiorComponentState();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function GetInteractiorComponentState

// Begin Class UInteractorComponent Function GetPauseInteractionState
struct Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics
{
	struct InteractorComponent_eventGetPauseInteractionState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractorComponent_eventGetPauseInteractionState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventGetPauseInteractionState_Parms), &Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "GetPauseInteractionState", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::InteractorComponent_eventGetPauseInteractionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::InteractorComponent_eventGetPauseInteractionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execGetPauseInteractionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPauseInteractionState();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function GetPauseInteractionState

// Begin Class UInteractorComponent Function Interact
struct Z_Construct_UFunction_UInteractorComponent_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactor Component" },
		{ "DisplayName", "Start Interaction" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractorComponent_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function Interact

// Begin Class UInteractorComponent Function LockFocusTarget
struct Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics
{
	struct InteractorComponent_eventLockFocusTarget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     Return true if Focus is was valid and one had lock \n     */" },
#endif
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if Focus is was valid and one had lock" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractorComponent_eventLockFocusTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventLockFocusTarget_Parms), &Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "LockFocusTarget", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::InteractorComponent_eventLockFocusTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::InteractorComponent_eventLockFocusTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_LockFocusTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_LockFocusTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execLockFocusTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LockFocusTarget();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function LockFocusTarget

// Begin Class UInteractorComponent Function PossessedReaction
struct Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics
{
	struct InteractorComponent_eventPossessedReaction_Parms
	{
		APawn* Pawn;
		AController* OldController;
		AController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventPossessedReaction_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventPossessedReaction_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventPossessedReaction_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::NewProp_OldController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "PossessedReaction", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::InteractorComponent_eventPossessedReaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::InteractorComponent_eventPossessedReaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_PossessedReaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_PossessedReaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execPossessedReaction)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(AController,Z_Param_OldController);
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PossessedReaction(Z_Param_Pawn,Z_Param_OldController,Z_Param_NewController);
	P_NATIVE_END;
}
// End Class UInteractorComponent Function PossessedReaction

// Begin Class UInteractorComponent Function ReleasedInteract
struct Z_Construct_UFunction_UInteractorComponent_ReleasedInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactor Component" },
		{ "DisplayName", "End Interaction" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_ReleasedInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "ReleasedInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_ReleasedInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_ReleasedInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractorComponent_ReleasedInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_ReleasedInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execReleasedInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleasedInteract();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function ReleasedInteract

// Begin Class UInteractorComponent Function SetInteractorComponentState
struct Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics
{
	struct InteractorComponent_eventSetInteractorComponentState_Parms
	{
		bool NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When you component deactivate, it keep calling OnNewInteractableAvailable and OnInteractableBecomeUnavailable delegate called */" },
#endif
		{ "DisplayName", "Set Enabled" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When you component deactivate, it keep calling OnNewInteractableAvailable and OnInteractableBecomeUnavailable delegate called" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_NewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::NewProp_NewState_SetBit(void* Obj)
{
	((InteractorComponent_eventSetInteractorComponentState_Parms*)Obj)->NewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventSetInteractorComponentState_Parms), &Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "SetInteractorComponentState", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::InteractorComponent_eventSetInteractorComponentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::InteractorComponent_eventSetInteractorComponentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execSetInteractorComponentState)
{
	P_GET_UBOOL(Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractorComponentState(Z_Param_NewState);
	P_NATIVE_END;
}
// End Class UInteractorComponent Function SetInteractorComponentState

// Begin Class UInteractorComponent Function SetPauseInteractionState
struct Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics
{
	struct InteractorComponent_eventSetPauseInteractionState_Parms
	{
		bool NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::NewProp_NewState_SetBit(void* Obj)
{
	((InteractorComponent_eventSetPauseInteractionState_Parms*)Obj)->NewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventSetPauseInteractionState_Parms), &Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "SetPauseInteractionState", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::InteractorComponent_eventSetPauseInteractionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::InteractorComponent_eventSetPauseInteractionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execSetPauseInteractionState)
{
	P_GET_UBOOL(Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPauseInteractionState(Z_Param_NewState);
	P_NATIVE_END;
}
// End Class UInteractorComponent Function SetPauseInteractionState

// Begin Class UInteractorComponent Function UnlockFocusTarget
struct Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics
{
	struct InteractorComponent_eventUnlockFocusTarget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    Return true if Focus has valid and one has unlock\n    */" },
#endif
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if Focus has valid and one has unlock" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractorComponent_eventUnlockFocusTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractorComponent_eventUnlockFocusTarget_Parms), &Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractorComponent, nullptr, "UnlockFocusTarget", nullptr, nullptr, Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::InteractorComponent_eventUnlockFocusTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::InteractorComponent_eventUnlockFocusTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractorComponent::execUnlockFocusTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnlockFocusTarget();
	P_NATIVE_END;
}
// End Class UInteractorComponent Function UnlockFocusTarget

// Begin Class UInteractorComponent
void UInteractorComponent::StaticRegisterNativesUInteractorComponent()
{
	UClass* Class = UInteractorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptNewInteractable", &UInteractorComponent::execAcceptNewInteractable },
		{ "GetFocusTarget", &UInteractorComponent::execGetFocusTarget },
		{ "GetInteractiorComponentState", &UInteractorComponent::execGetInteractiorComponentState },
		{ "GetPauseInteractionState", &UInteractorComponent::execGetPauseInteractionState },
		{ "Interact", &UInteractorComponent::execInteract },
		{ "LockFocusTarget", &UInteractorComponent::execLockFocusTarget },
		{ "PossessedReaction", &UInteractorComponent::execPossessedReaction },
		{ "ReleasedInteract", &UInteractorComponent::execReleasedInteract },
		{ "SetInteractorComponentState", &UInteractorComponent::execSetInteractorComponentState },
		{ "SetPauseInteractionState", &UInteractorComponent::execSetPauseInteractionState },
		{ "UnlockFocusTarget", &UInteractorComponent::execUnlockFocusTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractorComponent);
UClass* Z_Construct_UClass_UInteractorComponent_NoRegister()
{
	return UInteractorComponent::StaticClass();
}
struct Z_Construct_UClass_UInteractorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interactor Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InteractorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[] = {
		{ "Category", "InteractorComponent" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionTargetBeginOverlap_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionTargetEndOverlap_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionStarted_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionEnded_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionTargetBeginOverlap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionTargetEndOverlap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractorComponent_AcceptNewInteractable, "AcceptNewInteractable" }, // 2212683326
		{ &Z_Construct_UFunction_UInteractorComponent_GetFocusTarget, "GetFocusTarget" }, // 3603557667
		{ &Z_Construct_UFunction_UInteractorComponent_GetInteractiorComponentState, "GetInteractiorComponentState" }, // 188775084
		{ &Z_Construct_UFunction_UInteractorComponent_GetPauseInteractionState, "GetPauseInteractionState" }, // 2784888078
		{ &Z_Construct_UFunction_UInteractorComponent_Interact, "Interact" }, // 803472999
		{ &Z_Construct_UFunction_UInteractorComponent_LockFocusTarget, "LockFocusTarget" }, // 1283845786
		{ &Z_Construct_UFunction_UInteractorComponent_PossessedReaction, "PossessedReaction" }, // 1727783080
		{ &Z_Construct_UFunction_UInteractorComponent_ReleasedInteract, "ReleasedInteract" }, // 328368500
		{ &Z_Construct_UFunction_UInteractorComponent_SetInteractorComponentState, "SetInteractorComponentState" }, // 278576956
		{ &Z_Construct_UFunction_UInteractorComponent_SetPauseInteractionState, "SetPauseInteractionState" }, // 653155763
		{ &Z_Construct_UFunction_UInteractorComponent_UnlockFocusTarget, "UnlockFocusTarget" }, // 936920536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInteractorComponent_Statics::NewProp_InputActionName = { "InputActionName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, InputActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionName_MetaData), NewProp_InputActionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractorComponent_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionTargetBeginOverlap = { "OnInteractionTargetBeginOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, OnInteractionTargetBeginOverlap), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetBeginOverlapSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionTargetBeginOverlap_MetaData), NewProp_OnInteractionTargetBeginOverlap_MetaData) }; // 2165091460
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionTargetEndOverlap = { "OnInteractionTargetEndOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, OnInteractionTargetEndOverlap), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionTargetEndOverlapSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionTargetEndOverlap_MetaData), NewProp_OnInteractionTargetEndOverlap_MetaData) }; // 3128867526
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionStarted = { "OnInteractionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, OnInteractionStarted), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionStarted_MetaData), NewProp_OnInteractionStarted_MetaData) }; // 2359665867
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionEnded = { "OnInteractionEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, OnInteractionEnded), Z_Construct_USparseDelegateFunction_InteractionSystem_OnInteractionEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionEnded_MetaData), NewProp_OnInteractionEnded_MetaData) }; // 2740555965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractorComponent_Statics::NewProp_InputActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractorComponent_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionTargetBeginOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionTargetEndOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractorComponent_Statics::NewProp_OnInteractionEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractorComponent_Statics::ClassParams = {
	&UInteractorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractorComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractorComponent()
{
	if (!Z_Registration_Info_UClass_UInteractorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractorComponent.OuterSingleton, Z_Construct_UClass_UInteractorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractorComponent.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UInteractorComponent>()
{
	return UInteractorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractorComponent);
UInteractorComponent::~UInteractorComponent() {}
// End Class UInteractorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractorComponent, UInteractorComponent::StaticClass, TEXT("UInteractorComponent"), &Z_Registration_Info_UClass_UInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractorComponent), 1871627274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_859127814(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
