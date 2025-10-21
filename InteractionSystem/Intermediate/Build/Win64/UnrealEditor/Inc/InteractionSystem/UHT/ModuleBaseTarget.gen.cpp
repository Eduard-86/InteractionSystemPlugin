// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/Modules/ModuleBaseTarget.h"
#include "InteractionSystem/Public/TargetModular/InteractionTargetCollisionModular.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModuleBaseTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleBaseTarget();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleBaseTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

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

// Begin Class UModuleBaseTarget Function Init
struct ModuleBaseTarget_eventInit_Parms
{
	const UInteractionTargetCollisionModular* OwnerTarget;
};
static const FName NAME_UModuleBaseTarget_Init = FName(TEXT("Init"));
void UModuleBaseTarget::Init(const UInteractionTargetCollisionModular* OwnerTarget)
{
	UFunction* Func = FindFunctionChecked(NAME_UModuleBaseTarget_Init);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModuleBaseTarget_eventInit_Parms Parms;
		Parms.OwnerTarget=OwnerTarget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Init_Implementation(OwnerTarget);
	}
}
struct Z_Construct_UFunction_UModuleBaseTarget_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintImplementableEvent\n" },
#endif
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintImplementableEvent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::NewProp_OwnerTarget = { "OwnerTarget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleBaseTarget_eventInit_Parms, OwnerTarget), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTarget_MetaData), NewProp_OwnerTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::NewProp_OwnerTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleBaseTarget, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::PropPointers), sizeof(ModuleBaseTarget_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleBaseTarget_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleBaseTarget_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleBaseTarget_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleBaseTarget::execInit)
{
	P_GET_OBJECT(UInteractionTargetCollisionModular,Z_Param_OwnerTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init_Implementation(Z_Param_OwnerTarget);
	P_NATIVE_END;
}
// End Class UModuleBaseTarget Function Init

// Begin Class UModuleBaseTarget Function SetEnableFocus
struct Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus_Statics
{
	struct ModuleBaseTarget_eventSetEnableFocus_Parms
	{
		bool EnableState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UModuleBaseTarget();\n" },
#endif
		{ "DisplayName", "Set Enabled" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModuleBaseTarget();" },
#endif
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
		{ "GetEnableFocus", &UModuleBaseTarget::execGetEnableFocus },
		{ "Init", &UModuleBaseTarget::execInit },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nUCLASS(Blueprintable, Abstract) // , DefaultToInstanced , editinlinenew\nclass UModularSettingsBase : public UObject\n{\n\x09GENERATED_BODY()\n\npublic:\n\x09\n};\n*/" },
#endif
		{ "IncludePath", "TargetModular/Modules/ModuleBaseTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS(Blueprintable, Abstract) // , DefaultToInstanced , editinlinenew\nclass UModularSettingsBase : public UObject\n{\n       GENERATED_BODY()\n\npublic:\n\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "Category", "ModuleBaseTarget" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerInteractTarget_MetaData[] = {
		{ "Category", "ModuleBaseTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleBaseTarget.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerInteractTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModuleBaseTarget_GetEnableFocus, "GetEnableFocus" }, // 2624755350
		{ &Z_Construct_UFunction_UModuleBaseTarget_Init, "Init" }, // 262966805
		{ &Z_Construct_UFunction_UModuleBaseTarget_SetEnableFocus, "SetEnableFocus" }, // 1717278290
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_OwnerInteractTarget = { "OwnerInteractTarget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModuleBaseTarget, OwnerInteractTarget), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerInteractTarget_MetaData), NewProp_OwnerInteractTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModuleBaseTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_Enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModuleBaseTarget_Statics::NewProp_OwnerInteractTarget,
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
	0x009010A1u,
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
		{ Z_Construct_UClass_UModuleBaseTarget, UModuleBaseTarget::StaticClass, TEXT("UModuleBaseTarget"), &Z_Registration_Info_UClass_UModuleBaseTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModuleBaseTarget), 3858978254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_1849586642(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleBaseTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
