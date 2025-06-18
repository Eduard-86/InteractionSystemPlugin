// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/Modules/ModuleBaseTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModuleBaseTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettingsBase();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettingsBase_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleBaseTarget();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleBaseTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Class UModularSettingsBase
void UModularSettingsBase::StaticRegisterNativesUModularSettingsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularSettingsBase);
UClass* Z_Construct_UClass_UModularSettingsBase_NoRegister()
{
	return UModularSettingsBase::StaticClass();
}
struct Z_Construct_UClass_UModularSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TargetModular/Modules/ModuleBaseTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularSettingsBase_Statics::ClassParams = {
	&UModularSettingsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularSettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularSettingsBase()
{
	if (!Z_Registration_Info_UClass_UModularSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularSettingsBase.OuterSingleton, Z_Construct_UClass_UModularSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularSettingsBase.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UModularSettingsBase>()
{
	return UModularSettingsBase::StaticClass();
}
UModularSettingsBase::UModularSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSettingsBase);
UModularSettingsBase::~UModularSettingsBase() {}
// End Class UModularSettingsBase

// Begin Class UModuleBaseTarget Function ExecuteActionEvent
struct ModuleBaseTarget_eventExecuteActionEvent_Parms
{
	UModularSettingsBase* SettingsBlackboard;
	UInteractionTargetCollisionModular* OwnerInteraction;
};
static FName NAME_UModuleBaseTarget_ExecuteActionEvent = FName(TEXT("ExecuteActionEvent"));
void UModuleBaseTarget::ExecuteActionEvent(UModularSettingsBase* SettingsBlackboard, UInteractionTargetCollisionModular* OwnerInteraction)
{
	ModuleBaseTarget_eventExecuteActionEvent_Parms Parms;
	Parms.SettingsBlackboard=SettingsBlackboard;
	Parms.OwnerInteraction=OwnerInteraction;
	ProcessEvent(FindFunctionChecked(NAME_UModuleBaseTarget_ExecuteActionEvent),&Parms);
}
struct Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Initialize" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerInteraction_MetaData[] = {
		{ "DisplayName", "Owner" },
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsBlackboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerInteraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::NewProp_SettingsBlackboard = { "SettingsBlackboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleBaseTarget_eventExecuteActionEvent_Parms, SettingsBlackboard), Z_Construct_UClass_UModularSettingsBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::NewProp_OwnerInteraction = { "OwnerInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleBaseTarget_eventExecuteActionEvent_Parms, OwnerInteraction), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerInteraction_MetaData), NewProp_OwnerInteraction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::NewProp_SettingsBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::NewProp_OwnerInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleBaseTarget, nullptr, "ExecuteActionEvent", nullptr, nullptr, Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::PropPointers), sizeof(ModuleBaseTarget_eventExecuteActionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleBaseTarget_eventExecuteActionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleBaseTarget::execExecuteActionEvent)
{
	P_GET_OBJECT(UModularSettingsBase,Z_Param_SettingsBlackboard);
	P_GET_OBJECT(UInteractionTargetCollisionModular,Z_Param_OwnerInteraction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteActionEvent_Implementation(Z_Param_SettingsBlackboard,Z_Param_OwnerInteraction);
	P_NATIVE_END;
}
// End Class UModuleBaseTarget Function ExecuteActionEvent

// Begin Class UModuleBaseTarget Function GetEnableFocus
struct Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics
{
	struct ModuleBaseTarget_eventGetEnableFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Get Is Enabled" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModuleBaseTarget_eventGetEnableFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModuleBaseTarget_eventGetEnableFocus_Parms), &Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleBaseTarget, nullptr, "GetEnableFocus", nullptr, nullptr, Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::ModuleBaseTarget_eventGetEnableFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::ModuleBaseTarget_eventGetEnableFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleBaseTarget::execGetEnableFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableFocus();
	P_NATIVE_END;
}
// End Class UModuleBaseTarget Function GetEnableFocus

// Begin Class UModuleBaseTarget Function SetEnableFocus
struct Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics
{
	struct ModuleBaseTarget_eventSetEnableFocus_Parms
	{
		bool EnableState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Set Enabled" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::NewProp_EnableState_SetBit(void* Obj)
{
	((ModuleBaseTarget_eventSetEnableFocus_Parms*)Obj)->EnableState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::NewProp_EnableState = { "EnableState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModuleBaseTarget_eventSetEnableFocus_Parms), &Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::NewProp_EnableState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::NewProp_EnableState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleBaseTarget, nullptr, "SetEnableFocus", nullptr, nullptr, Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::ModuleBaseTarget_eventSetEnableFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::ModuleBaseTarget_eventSetEnableFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleBaseTarget::execSetEnableFocus)
{
	P_GET_UBOOL(Z_Param_EnableState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableFocus(Z_Param_EnableState);
	P_NATIVE_END;
}
// End Class UModuleBaseTarget Function SetEnableFocus

// Begin Class UModuleBaseTarget
void UModuleBaseTarget::StaticRegisterNativesUModuleBaseTarget()
{
	UClass* Class = UModuleBaseTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteActionEvent", &UModuleBaseTarget::execExecuteActionEvent },
		{ "GetEnableFocus", &UModuleBaseTarget::execGetEnableFocus },
		{ "SetEnableFocus", &UModuleBaseTarget::execSetEnableFocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModuleBaseTarget);
UClass* Z_Construct_UClass_UModuleBaseTarget_NoRegister()
{
	return UModuleBaseTarget::StaticClass();
}
struct Z_Construct_UClass_UModuleBaseTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TargetModular/Modules/ModuleBaseTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "Category", "ModuleBaseTarget" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModuleBaseTarget_ExecuteActionEvent, "ExecuteActionEvent" }, // 3719044896
		{ &Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus, "GetEnableFocus" }, // 2624755350
		{ &Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus, "SetEnableFocus" }, // 3343442512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModuleBaseTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((UModuleBaseTarget*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModuleBaseTarget), &Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enable_MetaData), NewProp_Enable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModuleBaseTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleBaseTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModuleBaseTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleBaseTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModuleBaseTarget_Statics::ClassParams = {
	&UModuleBaseTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModuleBaseTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModuleBaseTarget_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleBaseTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UModuleBaseTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModuleBaseTarget()
{
	if (!Z_Registration_Info_UClass_UModuleBaseTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModuleBaseTarget.OuterSingleton, Z_Construct_UClass_UModuleBaseTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModuleBaseTarget.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UModuleBaseTarget>()
{
	return UModuleBaseTarget::StaticClass();
}
UModuleBaseTarget::UModuleBaseTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModuleBaseTarget);
UModuleBaseTarget::~UModuleBaseTarget() {}
// End Class UModuleBaseTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularSettingsBase, UModularSettingsBase::StaticClass, TEXT("UModularSettingsBase"), &Z_Registration_Info_UClass_UModularSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularSettingsBase), 3676990040U) },
		{ Z_Construct_UClass_UModuleBaseTarget, UModuleBaseTarget::StaticClass, TEXT("UModuleBaseTarget"), &Z_Registration_Info_UClass_UModuleBaseTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModuleBaseTarget), 796515193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_2508102348(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
