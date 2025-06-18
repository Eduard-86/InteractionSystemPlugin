// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/InteractionTargetComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionTargetComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetComponent();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent_NoRegister();
INTERACTIONSYSTEM_API UEnum* Z_Construct_UEnum_InteractionSystem_EKeyInteractionType();
INTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature();
INTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Delegate FInteractionTargetEventSignature
struct Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics
{
	struct _Script_InteractionSystem_eventInteractionTargetEventSignature_Parms
	{
		const UInteractorComponent* InteractorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentOnReceiveFocusSignature,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09""const UInteractorComponent*,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09InteractorComponent);\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentOnReceiveFocusSignature,\n                                                                                       const UInteractorComponent*,\n                                                                                       InteractorComponent);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionSystem_eventInteractionTargetEventSignature_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem, nullptr, "InteractionTargetEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventInteractionTargetEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventInteractionTargetEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInteractionTargetEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InteractionTargetEventSignature, const UInteractorComponent* InteractorComponent)
{
	struct _Script_InteractionSystem_eventInteractionTargetEventSignature_Parms
	{
		const UInteractorComponent* InteractorComponent;
	};
	_Script_InteractionSystem_eventInteractionTargetEventSignature_Parms Parms;
	Parms.InteractorComponent=InteractorComponent;
	InteractionTargetEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInteractionTargetEventSignature

// Begin Delegate FOnInteractSignature
struct Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics
{
	struct _Script_InteractionSystem_eventOnInteractSignature_Parms
	{
		UInteractorComponent* InteractorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionSystem_eventOnInteractSignature_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem, nullptr, "OnInteractSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::_Script_InteractionSystem_eventOnInteractSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractSignature, UInteractorComponent* InteractorComponent)
{
	struct _Script_InteractionSystem_eventOnInteractSignature_Parms
	{
		UInteractorComponent* InteractorComponent;
	};
	_Script_InteractionSystem_eventOnInteractSignature_Parms Parms;
	Parms.InteractorComponent=InteractorComponent;
	OnInteractSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractSignature

// Begin Enum EKeyInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeyInteractionType;
static UEnum* EKeyInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKeyInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKeyInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractionSystem_EKeyInteractionType, (UObject*)Z_Construct_UPackage__Script_InteractionSystem(), TEXT("EKeyInteractionType"));
	}
	return Z_Registration_Info_UEnum_EKeyInteractionType.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<EKeyInteractionType>()
{
	return EKeyInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentPressedSignature,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09UInteractorComponent*,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09InteractorComponent);\n//\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentReleasedSignature,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09UInteractorComponent*,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09InteractorComponent);\n//\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentOnLoseFocusSignature,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09""const UInteractorComponent*,\n//\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09InteractorComponent);\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
		{ "NeedPress.Name", "EKeyInteractionType::NeedPress" },
		{ "OneClick.Comment", "/*\n\x09VE_SimpleAnalis\x09\x09\x09  UMETA(DisplayName = \"SimpleAnalis\"),\n\x09*/" },
		{ "OneClick.Name", "EKeyInteractionType::OneClick" },
		{ "OneClick.ToolTip", "VE_SimpleAnalis                   UMETA(DisplayName = \"SimpleAnalis\")," },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentPressedSignature,\n                                                                                       UInteractorComponent*,\n                                                                                       InteractorComponent);\n\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentReleasedSignature,\n                                                                                       UInteractorComponent*,\n                                                                                       InteractorComponent);\n\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentOnLoseFocusSignature,\n                                                                                       const UInteractorComponent*,\n                                                                                       InteractorComponent);" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKeyInteractionType::OneClick", (int64)EKeyInteractionType::OneClick },
		{ "EKeyInteractionType::NeedPress", (int64)EKeyInteractionType::NeedPress },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem,
	nullptr,
	"EKeyInteractionType",
	"EKeyInteractionType",
	Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractionSystem_EKeyInteractionType()
{
	if (!Z_Registration_Info_UEnum_EKeyInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeyInteractionType.InnerSingleton, Z_Construct_UEnum_InteractionSystem_EKeyInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKeyInteractionType.InnerSingleton;
}
// End Enum EKeyInteractionType

// Begin Class UInteractionTargetComponent Function GetInteractiorActivityState
struct Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics
{
	struct InteractionTargetComponent_eventGetInteractiorActivityState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Get Is Enabled" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractionTargetComponent_eventGetInteractiorActivityState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionTargetComponent_eventGetInteractiorActivityState_Parms), &Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetComponent, nullptr, "GetInteractiorActivityState", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::InteractionTargetComponent_eventGetInteractiorActivityState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::InteractionTargetComponent_eventGetInteractiorActivityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetComponent::execGetInteractiorActivityState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInteractiorActivityState();
	P_NATIVE_END;
}
// End Class UInteractionTargetComponent Function GetInteractiorActivityState

// Begin Class UInteractionTargetComponent Function OnComponentBeginOverlap
struct Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics
{
	struct InteractionTargetComponent_eventOnComponentBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractionTargetComponent_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionTargetComponent_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetComponent, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::InteractionTargetComponent_eventOnComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::InteractionTargetComponent_eventOnComponentBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetComponent::execOnComponentBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UInteractionTargetComponent Function OnComponentBeginOverlap

// Begin Class UInteractionTargetComponent Function OnComponentEndOverlap
struct Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics
{
	struct InteractionTargetComponent_eventOnComponentEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetComponent, nullptr, "OnComponentEndOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::InteractionTargetComponent_eventOnComponentEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::InteractionTargetComponent_eventOnComponentEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetComponent::execOnComponentEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class UInteractionTargetComponent Function OnComponentEndOverlap

// Begin Class UInteractionTargetComponent Function ReattachParentCollision
struct Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics
{
	struct InteractionTargetComponent_eventReattachParentCollision_Parms
	{
		UPrimitiveComponent* NewParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventReattachParentCollision_Parms, NewParent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParent_MetaData), NewProp_NewParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::NewProp_NewParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetComponent, nullptr, "ReattachParentCollision", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::InteractionTargetComponent_eventReattachParentCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::InteractionTargetComponent_eventReattachParentCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetComponent::execReattachParentCollision)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReattachParentCollision(Z_Param_NewParent);
	P_NATIVE_END;
}
// End Class UInteractionTargetComponent Function ReattachParentCollision

// Begin Class UInteractionTargetComponent Function SetInteractorActivityState
struct Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics
{
	struct InteractionTargetComponent_eventSetInteractorActivityState_Parms
	{
		bool NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Set Enabled" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::NewProp_NewState_SetBit(void* Obj)
{
	((InteractionTargetComponent_eventSetInteractorActivityState_Parms*)Obj)->NewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionTargetComponent_eventSetInteractorActivityState_Parms), &Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetComponent, nullptr, "SetInteractorActivityState", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::InteractionTargetComponent_eventSetInteractorActivityState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::InteractionTargetComponent_eventSetInteractorActivityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetComponent::execSetInteractorActivityState)
{
	P_GET_UBOOL(Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractorActivityState(Z_Param_NewState);
	P_NATIVE_END;
}
// End Class UInteractionTargetComponent Function SetInteractorActivityState

// Begin Class UInteractionTargetComponent Function WantFocus
struct InteractionTargetComponent_eventWantFocus_Parms
{
	const UInteractorComponent* InteractorComponent;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	InteractionTargetComponent_eventWantFocus_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UInteractionTargetComponent_WantFocus = FName(TEXT("WantFocus"));
float UInteractionTargetComponent::WantFocus(const UInteractorComponent* InteractorComponent)
{
	InteractionTargetComponent_eventWantFocus_Parms Parms;
	Parms.InteractorComponent=InteractorComponent;
	ProcessEvent(FindFunctionChecked(NAME_UInteractionTargetComponent_WantFocus),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventWantFocus_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetComponent_eventWantFocus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::NewProp_InteractorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetComponent, nullptr, "WantFocus", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::PropPointers), sizeof(InteractionTargetComponent_eventWantFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionTargetComponent_eventWantFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetComponent_WantFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetComponent_WantFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetComponent::execWantFocus)
{
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->WantFocus_Implementation(Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UInteractionTargetComponent Function WantFocus

// Begin Class UInteractionTargetComponent
void UInteractionTargetComponent::StaticRegisterNativesUInteractionTargetComponent()
{
	UClass* Class = UInteractionTargetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractiorActivityState", &UInteractionTargetComponent::execGetInteractiorActivityState },
		{ "OnComponentBeginOverlap", &UInteractionTargetComponent::execOnComponentBeginOverlap },
		{ "OnComponentEndOverlap", &UInteractionTargetComponent::execOnComponentEndOverlap },
		{ "ReattachParentCollision", &UInteractionTargetComponent::execReattachParentCollision },
		{ "SetInteractorActivityState", &UInteractionTargetComponent::execSetInteractorActivityState },
		{ "WantFocus", &UInteractionTargetComponent::execWantFocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionTargetComponent);
UClass* Z_Construct_UClass_UInteractionTargetComponent_NoRegister()
{
	return UInteractionTargetComponent::StaticClass();
}
struct Z_Construct_UClass_UInteractionTargetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interaction Target" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InteractionTargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[] = {
		{ "Category", "InteractionTargetComponent" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WontFocusClampValue_MetaData[] = {
		{ "Category", "InteractionTargetComponent" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[] = {
		{ "Category", "InteractionTarget" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiveFocus_MetaData[] = {
		{ "Category", "InteractionTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// interactor focus target and lose focuse \n" },
#endif
		{ "DisplayName", "On Focus Received" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "interactor focus target and lose focuse" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoseFocus_MetaData[] = {
		{ "Category", "InteractionTarget" },
		{ "DisplayName", "On Focus Lost" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPressedInteractionKey_MetaData[] = {
		{ "Category", "InteractionTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// press key\n" },
#endif
		{ "DisplayName", "On Interaction Started" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "press key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReleasedInteractionKey_MetaData[] = {
		{ "Category", "InteractionTarget" },
		{ "DisplayName", "On Interaction Ended" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorNoticed_MetaData[] = {
		{ "Category", "InteractionTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interactor sing target and loos sing \n" },
#endif
		{ "DisplayName", "On Interactor Begin Overlap" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interactor sing target and loos sing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorLoseSight_MetaData[] = {
		{ "Category", "InteractionTarget" },
		{ "DisplayName", "On Interactor End Overlap" },
		{ "ModuleRelativePath", "Public/InteractionTargetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WontFocusClampValue;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveFocus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoseFocus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedInteractionKey;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleasedInteractionKey;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractorNoticed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractorLoseSight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionTargetComponent_GetInteractiorActivityState, "GetInteractiorActivityState" }, // 635823217
		{ &Z_Construct_UFunction_UInteractionTargetComponent_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 3205081748
		{ &Z_Construct_UFunction_UInteractionTargetComponent_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 710903501
		{ &Z_Construct_UFunction_UInteractionTargetComponent_ReattachParentCollision, "ReattachParentCollision" }, // 2700755812
		{ &Z_Construct_UFunction_UInteractionTargetComponent_SetInteractorActivityState, "SetInteractorActivityState" }, // 3191483557
		{ &Z_Construct_UFunction_UInteractionTargetComponent_WantFocus, "WantFocus" }, // 2586281255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionTargetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_KeyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, KeyType), Z_Construct_UEnum_InteractionSystem_EKeyInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyType_MetaData), NewProp_KeyType_MetaData) }; // 1511770363
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_WontFocusClampValue = { "WontFocusClampValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, WontFocusClampValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WontFocusClampValue_MetaData), NewProp_WontFocusClampValue_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, OnInteract), Z_Construct_UDelegateFunction_InteractionSystem_OnInteractSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteract_MetaData), NewProp_OnInteract_MetaData) }; // 4112153023
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnReceiveFocus = { "OnReceiveFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, OnReceiveFocus), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceiveFocus_MetaData), NewProp_OnReceiveFocus_MetaData) }; // 1674558060
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnLoseFocus = { "OnLoseFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, OnLoseFocus), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoseFocus_MetaData), NewProp_OnLoseFocus_MetaData) }; // 1674558060
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnPressedInteractionKey = { "OnPressedInteractionKey", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, OnPressedInteractionKey), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPressedInteractionKey_MetaData), NewProp_OnPressedInteractionKey_MetaData) }; // 1674558060
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnReleasedInteractionKey = { "OnReleasedInteractionKey", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, OnReleasedInteractionKey), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReleasedInteractionKey_MetaData), NewProp_OnReleasedInteractionKey_MetaData) }; // 1674558060
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_InteractorNoticed = { "InteractorNoticed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, InteractorNoticed), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorNoticed_MetaData), NewProp_InteractorNoticed_MetaData) }; // 1674558060
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_InteractorLoseSight = { "InteractorLoseSight", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetComponent, InteractorLoseSight), Z_Construct_UDelegateFunction_InteractionSystem_InteractionTargetEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorLoseSight_MetaData), NewProp_InteractorLoseSight_MetaData) }; // 1674558060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionTargetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_KeyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_KeyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_WontFocusClampValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnReceiveFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnLoseFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnPressedInteractionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_OnReleasedInteractionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_InteractorNoticed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetComponent_Statics::NewProp_InteractorLoseSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionTargetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionTargetComponent_Statics::ClassParams = {
	&UInteractionTargetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionTargetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionTargetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionTargetComponent()
{
	if (!Z_Registration_Info_UClass_UInteractionTargetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionTargetComponent.OuterSingleton, Z_Construct_UClass_UInteractionTargetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionTargetComponent.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UInteractionTargetComponent>()
{
	return UInteractionTargetComponent::StaticClass();
}
UInteractionTargetComponent::UInteractionTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionTargetComponent);
UInteractionTargetComponent::~UInteractionTargetComponent() {}
// End Class UInteractionTargetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKeyInteractionType_StaticEnum, TEXT("EKeyInteractionType"), &Z_Registration_Info_UEnum_EKeyInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1511770363U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionTargetComponent, UInteractionTargetComponent::StaticClass, TEXT("UInteractionTargetComponent"), &Z_Registration_Info_UClass_UInteractionTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionTargetComponent), 1236434796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_95909734(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_InteractionTargetComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
