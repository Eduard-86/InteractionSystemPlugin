// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/InteractionTargetCollisionModular.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionTargetCollisionModular() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollision();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollisionModular();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularDisplaySettings_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettings_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleDisplayTarget_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleFocusTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Class UInteractionTargetCollisionModular Function CreateModules
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "CreateModules", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execCreateModules)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateModules();
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function CreateModules

// Begin Class UInteractionTargetCollisionModular Function GetFocusModule
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics
{
	struct InteractionTargetCollisionModular_eventGetFocusModule_Parms
	{
		const UInteractorComponent* InteractorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFocusModule_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetFocusModule", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::InteractionTargetCollisionModular_eventGetFocusModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::InteractionTargetCollisionModular_eventGetFocusModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetFocusModule)
{
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFocusModule(Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetFocusModule

// Begin Class UInteractionTargetCollisionModular Function GetFocusModuleByClass
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics
{
	struct InteractionTargetCollisionModular_eventGetFocusModuleByClass_Parms
	{
		TSubclassOf<UModuleFocusTarget> Class;
		TArray<UModuleFocusTarget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modular Target" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFocusModuleByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UModuleFocusTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModuleFocusTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFocusModuleByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetFocusModuleByClass", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::InteractionTargetCollisionModular_eventGetFocusModuleByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::InteractionTargetCollisionModular_eventGetFocusModuleByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetFocusModuleByClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UModuleFocusTarget*>*)Z_Param__Result=P_THIS->GetFocusModuleByClass(Z_Param_Class);
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetFocusModuleByClass

// Begin Class UInteractionTargetCollisionModular Function GetFocusModules
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics
{
	struct InteractionTargetCollisionModular_eventGetFocusModules_Parms
	{
		TArray<UModuleFocusTarget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modular Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//static TArray<TSubclassOf<UModuleDisplayTarget>> DisplayModulesStati\xef\xbf\xbd;\n" },
#endif
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static TArray<TSubclassOf<UModuleDisplayTarget>> DisplayModulesStati\xef\xbf\xbd;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModuleFocusTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFocusModules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetFocusModules", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::InteractionTargetCollisionModular_eventGetFocusModules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::InteractionTargetCollisionModular_eventGetFocusModules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetFocusModules)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UModuleFocusTarget*>*)Z_Param__Result=P_THIS->GetFocusModules();
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetFocusModules

// Begin Class UInteractionTargetCollisionModular Function GetFunctionalModuleByClass
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics
{
	struct InteractionTargetCollisionModular_eventGetFunctionalModuleByClass_Parms
	{
		TSubclassOf<UModuleDisplayTarget> Class;
		TArray<UModuleDisplayTarget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modular Target" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFunctionalModuleByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UModuleDisplayTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModuleDisplayTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFunctionalModuleByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetFunctionalModuleByClass", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::InteractionTargetCollisionModular_eventGetFunctionalModuleByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::InteractionTargetCollisionModular_eventGetFunctionalModuleByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetFunctionalModuleByClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UModuleDisplayTarget*>*)Z_Param__Result=P_THIS->GetFunctionalModuleByClass(Z_Param_Class);
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetFunctionalModuleByClass

// Begin Class UInteractionTargetCollisionModular Function GetFunctionalModules
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics
{
	struct InteractionTargetCollisionModular_eventGetFunctionalModules_Parms
	{
		TArray<UModuleDisplayTarget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modular Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: functions\n" },
#endif
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModuleDisplayTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetFunctionalModules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetFunctionalModules", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::InteractionTargetCollisionModular_eventGetFunctionalModules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::InteractionTargetCollisionModular_eventGetFunctionalModules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetFunctionalModules)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UModuleDisplayTarget*>*)Z_Param__Result=P_THIS->GetFunctionalModules();
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetFunctionalModules

// Begin Class UInteractionTargetCollisionModular Function GetLoseSightModule
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics
{
	struct InteractionTargetCollisionModular_eventGetLoseSightModule_Parms
	{
		const UInteractorComponent* InteractorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetLoseSightModule_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetLoseSightModule", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::InteractionTargetCollisionModular_eventGetLoseSightModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::InteractionTargetCollisionModular_eventGetLoseSightModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetLoseSightModule)
{
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLoseSightModule(Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetLoseSightModule

// Begin Class UInteractionTargetCollisionModular Function GetNoticedModule
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics
{
	struct InteractionTargetCollisionModular_eventGetNoticedModule_Parms
	{
		const UInteractorComponent* InteractorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventGetNoticedModule_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "GetNoticedModule", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::InteractionTargetCollisionModular_eventGetNoticedModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::InteractionTargetCollisionModular_eventGetNoticedModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execGetNoticedModule)
{
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNoticedModule(Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function GetNoticedModule

// Begin Class UInteractionTargetCollisionModular Function LoseFocusModule
struct Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics
{
	struct InteractionTargetCollisionModular_eventLoseFocusModule_Parms
	{
		const UInteractorComponent* InteractorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionTargetCollisionModular_eventLoseFocusModule_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionTargetCollisionModular, nullptr, "LoseFocusModule", nullptr, nullptr, Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::InteractionTargetCollisionModular_eventLoseFocusModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::InteractionTargetCollisionModular_eventLoseFocusModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionTargetCollisionModular::execLoseFocusModule)
{
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoseFocusModule(Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UInteractionTargetCollisionModular Function LoseFocusModule

// Begin Class UInteractionTargetCollisionModular
void UInteractionTargetCollisionModular::StaticRegisterNativesUInteractionTargetCollisionModular()
{
	UClass* Class = UInteractionTargetCollisionModular::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateModules", &UInteractionTargetCollisionModular::execCreateModules },
		{ "GetFocusModule", &UInteractionTargetCollisionModular::execGetFocusModule },
		{ "GetFocusModuleByClass", &UInteractionTargetCollisionModular::execGetFocusModuleByClass },
		{ "GetFocusModules", &UInteractionTargetCollisionModular::execGetFocusModules },
		{ "GetFunctionalModuleByClass", &UInteractionTargetCollisionModular::execGetFunctionalModuleByClass },
		{ "GetFunctionalModules", &UInteractionTargetCollisionModular::execGetFunctionalModules },
		{ "GetLoseSightModule", &UInteractionTargetCollisionModular::execGetLoseSightModule },
		{ "GetNoticedModule", &UInteractionTargetCollisionModular::execGetNoticedModule },
		{ "LoseFocusModule", &UInteractionTargetCollisionModular::execLoseFocusModule },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionTargetCollisionModular);
UClass* Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister()
{
	return UInteractionTargetCollisionModular::StaticClass();
}
struct Z_Construct_UClass_UInteractionTargetCollisionModular_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interaction Target Modular" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TargetModular/InteractionTargetCollisionModular.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusModulesArray_MetaData[] = {
		{ "Category", "ModularTarget" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusModulesDisplay_MetaData[] = {
		{ "Category", "ModularTarget" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusMultiplier_MetaData[] = {
		{ "Category", "InteractionTargetCollisionModular" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusBias_MetaData[] = {
		{ "Category", "InteractionTargetCollisionModular" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusModules_MetaData[] = {
		{ "Category", "Modular Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EditDefaultsOnly\n" },
#endif
		{ "DisplayName", "Focus Modules" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EditDefaultsOnly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularBlackboard_Inner_MetaData[] = {
		{ "Category", "Modular Target" },
		{ "DisplayName", "Focus Module Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularBlackboard_MetaData[] = {
		{ "Category", "Modular Target" },
		{ "DisplayName", "Focus Module Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModules_MetaData[] = {
		{ "Category", "Modular Target" },
		{ "DisplayName", "Functional Modules" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularDisplayBlackboard_Inner_MetaData[] = {
		{ "Category", "Modular Target" },
		{ "DisplayName", "Functional Module Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularDisplayBlackboard_MetaData[] = {
		{ "Category", "Modular Target" },
		{ "DisplayName", "Functional Module Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/InteractionTargetCollisionModular.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusModulesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusModulesArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusModulesDisplay_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusModulesDisplay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusBias;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FocusModules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusModules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularBlackboard_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModularBlackboard;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DisplayModules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayModules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularDisplayBlackboard_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModularDisplayBlackboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_CreateModules, "CreateModules" }, // 1107212095
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModule, "GetFocusModule" }, // 822248539
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModuleByClass, "GetFocusModuleByClass" }, // 1285119547
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFocusModules, "GetFocusModules" }, // 2934946677
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModuleByClass, "GetFunctionalModuleByClass" }, // 3582329418
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetFunctionalModules, "GetFunctionalModules" }, // 1667298586
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetLoseSightModule, "GetLoseSightModule" }, // 4217496069
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_GetNoticedModule, "GetNoticedModule" }, // 1514036542
		{ &Z_Construct_UFunction_UInteractionTargetCollisionModular_LoseFocusModule, "LoseFocusModule" }, // 255428752
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionTargetCollisionModular>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesArray_Inner = { "FocusModulesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModuleFocusTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesArray = { "FocusModulesArray", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, FocusModulesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusModulesArray_MetaData), NewProp_FocusModulesArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesDisplay_Inner = { "FocusModulesDisplay", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModuleDisplayTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesDisplay = { "FocusModulesDisplay", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, FocusModulesDisplay), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusModulesDisplay_MetaData), NewProp_FocusModulesDisplay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusMultiplier = { "FocusMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, FocusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusMultiplier_MetaData), NewProp_FocusMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusBias = { "FocusBias", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, FocusBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusBias_MetaData), NewProp_FocusBias_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModules_Inner = { "FocusModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UModuleFocusTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModules = { "FocusModules", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, FocusModules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusModules_MetaData), NewProp_FocusModules_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularBlackboard_Inner = { "ModularBlackboard", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularBlackboard_Inner_MetaData), NewProp_ModularBlackboard_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularBlackboard = { "ModularBlackboard", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, ModularBlackboard), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularBlackboard_MetaData), NewProp_ModularBlackboard_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_DisplayModules_Inner = { "DisplayModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UModuleDisplayTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_DisplayModules = { "DisplayModules", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, DisplayModules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModules_MetaData), NewProp_DisplayModules_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularDisplayBlackboard_Inner = { "ModularDisplayBlackboard", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularDisplaySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularDisplayBlackboard_Inner_MetaData), NewProp_ModularDisplayBlackboard_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularDisplayBlackboard = { "ModularDisplayBlackboard", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollisionModular, ModularDisplayBlackboard), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularDisplayBlackboard_MetaData), NewProp_ModularDisplayBlackboard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesDisplay_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModulesDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_FocusModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularBlackboard_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_DisplayModules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_DisplayModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularDisplayBlackboard_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::NewProp_ModularDisplayBlackboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionTargetCollision,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::ClassParams = {
	&UInteractionTargetCollisionModular::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionTargetCollisionModular()
{
	if (!Z_Registration_Info_UClass_UInteractionTargetCollisionModular.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionTargetCollisionModular.OuterSingleton, Z_Construct_UClass_UInteractionTargetCollisionModular_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionTargetCollisionModular.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UInteractionTargetCollisionModular>()
{
	return UInteractionTargetCollisionModular::StaticClass();
}
UInteractionTargetCollisionModular::UInteractionTargetCollisionModular(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionTargetCollisionModular);
UInteractionTargetCollisionModular::~UInteractionTargetCollisionModular() {}
// End Class UInteractionTargetCollisionModular

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionTargetCollisionModular, UInteractionTargetCollisionModular::StaticClass, TEXT("UInteractionTargetCollisionModular"), &Z_Registration_Info_UClass_UInteractionTargetCollisionModular, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionTargetCollisionModular), 4198496076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_4253863721(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_InteractionTargetCollisionModular_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
