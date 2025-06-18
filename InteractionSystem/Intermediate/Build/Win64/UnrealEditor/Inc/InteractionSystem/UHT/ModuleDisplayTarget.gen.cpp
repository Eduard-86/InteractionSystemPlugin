// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/Modules/ModuleDisplayTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModuleDisplayTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularDisplaySettings();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularDisplaySettings_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettingsBase();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleBaseTarget();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleDisplayTarget();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleDisplayTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Class UModularDisplaySettings
void UModularDisplaySettings::StaticRegisterNativesUModularDisplaySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularDisplaySettings);
UClass* Z_Construct_UClass_UModularDisplaySettings_NoRegister()
{
	return UModularDisplaySettings::StaticClass();
}
struct Z_Construct_UClass_UModularDisplaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interaction Target Functional Module Settings" },
		{ "IncludePath", "TargetModular/Modules/ModuleDisplayTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetScale_MetaData[] = {
		{ "Category", "Default Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//protected:\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "protected:" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDisplaySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UModularDisplaySettings_Statics::NewProp_WidgetScale = { "WidgetScale", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDisplaySettings, WidgetScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetScale_MetaData), NewProp_WidgetScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularDisplaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularDisplaySettings_Statics::NewProp_WidgetScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularDisplaySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularDisplaySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModularSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularDisplaySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularDisplaySettings_Statics::ClassParams = {
	&UModularDisplaySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularDisplaySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularDisplaySettings_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularDisplaySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularDisplaySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularDisplaySettings()
{
	if (!Z_Registration_Info_UClass_UModularDisplaySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDisplaySettings.OuterSingleton, Z_Construct_UClass_UModularDisplaySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDisplaySettings.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UModularDisplaySettings>()
{
	return UModularDisplaySettings::StaticClass();
}
UModularDisplaySettings::UModularDisplaySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularDisplaySettings);
UModularDisplaySettings::~UModularDisplaySettings() {}
// End Class UModularDisplaySettings

// Begin Class UModuleDisplayTarget Function DisplayTick
struct ModuleDisplayTarget_eventDisplayTick_Parms
{
	float DeltaTime;
};
static const FName NAME_UModuleDisplayTarget_DisplayTick = FName(TEXT("DisplayTick"));
void UModuleDisplayTarget::DisplayTick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UModuleDisplayTarget_DisplayTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModuleDisplayTarget_eventDisplayTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DisplayTick_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Event Tick" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventDisplayTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleDisplayTarget, nullptr, "DisplayTick", nullptr, nullptr, Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::PropPointers), sizeof(ModuleDisplayTarget_eventDisplayTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleDisplayTarget_eventDisplayTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleDisplayTarget::execDisplayTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayTick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UModuleDisplayTarget Function DisplayTick

// Begin Class UModuleDisplayTarget Function FocusGet
struct ModuleDisplayTarget_eventFocusGet_Parms
{
	UInteractionTargetCollisionModular* OwnerTarget;
	const UInteractorComponent* InteractorComponent;
};
static const FName NAME_UModuleDisplayTarget_FocusGet = FName(TEXT("FocusGet"));
void UModuleDisplayTarget::FocusGet(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UModuleDisplayTarget_FocusGet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModuleDisplayTarget_eventFocusGet_Parms Parms;
		Parms.OwnerTarget=OwnerTarget;
		Parms.InteractorComponent=InteractorComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		FocusGet_Implementation(OwnerTarget, InteractorComponent);
	}
}
struct Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = \"Init\"))\n//void Init(UInteractionTargetCollisionModular* OwnerTarget);\n" },
#endif
		{ "DisplayName", "On Focus Received" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = \"Init\"))\nvoid Init(UInteractionTargetCollisionModular* OwnerTarget);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::NewProp_OwnerTarget = { "OwnerTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventFocusGet_Parms, OwnerTarget), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTarget_MetaData), NewProp_OwnerTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventFocusGet_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::NewProp_OwnerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleDisplayTarget, nullptr, "FocusGet", nullptr, nullptr, Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::PropPointers), sizeof(ModuleDisplayTarget_eventFocusGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleDisplayTarget_eventFocusGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleDisplayTarget_FocusGet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleDisplayTarget_FocusGet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleDisplayTarget::execFocusGet)
{
	P_GET_OBJECT(UInteractionTargetCollisionModular,Z_Param_OwnerTarget);
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusGet_Implementation(Z_Param_OwnerTarget,Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UModuleDisplayTarget Function FocusGet

// Begin Class UModuleDisplayTarget Function FocusLose
struct ModuleDisplayTarget_eventFocusLose_Parms
{
	UInteractionTargetCollisionModular* OwnerTarget;
	const UInteractorComponent* InteractorComponent;
};
static const FName NAME_UModuleDisplayTarget_FocusLose = FName(TEXT("FocusLose"));
void UModuleDisplayTarget::FocusLose(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UModuleDisplayTarget_FocusLose);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModuleDisplayTarget_eventFocusLose_Parms Parms;
		Parms.OwnerTarget=OwnerTarget;
		Parms.InteractorComponent=InteractorComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		FocusLose_Implementation(OwnerTarget, InteractorComponent);
	}
}
struct Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Focus Lost" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::NewProp_OwnerTarget = { "OwnerTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventFocusLose_Parms, OwnerTarget), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTarget_MetaData), NewProp_OwnerTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventFocusLose_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::NewProp_OwnerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleDisplayTarget, nullptr, "FocusLose", nullptr, nullptr, Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::PropPointers), sizeof(ModuleDisplayTarget_eventFocusLose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleDisplayTarget_eventFocusLose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleDisplayTarget_FocusLose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleDisplayTarget_FocusLose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleDisplayTarget::execFocusLose)
{
	P_GET_OBJECT(UInteractionTargetCollisionModular,Z_Param_OwnerTarget);
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusLose_Implementation(Z_Param_OwnerTarget,Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UModuleDisplayTarget Function FocusLose

// Begin Class UModuleDisplayTarget Function OwnInteractorBeginOvelrap
struct ModuleDisplayTarget_eventOwnInteractorBeginOvelrap_Parms
{
	UInteractionTargetCollisionModular* OwnerTarget;
	const UInteractorComponent* InteractorComponent;
};
static const FName NAME_UModuleDisplayTarget_OwnInteractorBeginOvelrap = FName(TEXT("OwnInteractorBeginOvelrap"));
void UModuleDisplayTarget::OwnInteractorBeginOvelrap(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UModuleDisplayTarget_OwnInteractorBeginOvelrap);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModuleDisplayTarget_eventOwnInteractorBeginOvelrap_Parms Parms;
		Parms.OwnerTarget=OwnerTarget;
		Parms.InteractorComponent=InteractorComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OwnInteractorBeginOvelrap_Implementation(OwnerTarget, InteractorComponent);
	}
}
struct Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Interactor Begin Overlap" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::NewProp_OwnerTarget = { "OwnerTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventOwnInteractorBeginOvelrap_Parms, OwnerTarget), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTarget_MetaData), NewProp_OwnerTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventOwnInteractorBeginOvelrap_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::NewProp_OwnerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleDisplayTarget, nullptr, "OwnInteractorBeginOvelrap", nullptr, nullptr, Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::PropPointers), sizeof(ModuleDisplayTarget_eventOwnInteractorBeginOvelrap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleDisplayTarget_eventOwnInteractorBeginOvelrap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleDisplayTarget::execOwnInteractorBeginOvelrap)
{
	P_GET_OBJECT(UInteractionTargetCollisionModular,Z_Param_OwnerTarget);
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OwnInteractorBeginOvelrap_Implementation(Z_Param_OwnerTarget,Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UModuleDisplayTarget Function OwnInteractorBeginOvelrap

// Begin Class UModuleDisplayTarget Function OwnInteractorEndOvelrap
struct ModuleDisplayTarget_eventOwnInteractorEndOvelrap_Parms
{
	UInteractionTargetCollisionModular* OwnerTarget;
	const UInteractorComponent* InteractorComponent;
};
static const FName NAME_UModuleDisplayTarget_OwnInteractorEndOvelrap = FName(TEXT("OwnInteractorEndOvelrap"));
void UModuleDisplayTarget::OwnInteractorEndOvelrap(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UModuleDisplayTarget_OwnInteractorEndOvelrap);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModuleDisplayTarget_eventOwnInteractorEndOvelrap_Parms Parms;
		Parms.OwnerTarget=OwnerTarget;
		Parms.InteractorComponent=InteractorComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OwnInteractorEndOvelrap_Implementation(OwnerTarget, InteractorComponent);
	}
}
struct Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Interactor End Overlap" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::NewProp_OwnerTarget = { "OwnerTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventOwnInteractorEndOvelrap_Parms, OwnerTarget), Z_Construct_UClass_UInteractionTargetCollisionModular_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTarget_MetaData), NewProp_OwnerTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::NewProp_InteractorComponent = { "InteractorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleDisplayTarget_eventOwnInteractorEndOvelrap_Parms, InteractorComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorComponent_MetaData), NewProp_InteractorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::NewProp_OwnerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::NewProp_InteractorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleDisplayTarget, nullptr, "OwnInteractorEndOvelrap", nullptr, nullptr, Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::PropPointers), sizeof(ModuleDisplayTarget_eventOwnInteractorEndOvelrap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleDisplayTarget_eventOwnInteractorEndOvelrap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleDisplayTarget::execOwnInteractorEndOvelrap)
{
	P_GET_OBJECT(UInteractionTargetCollisionModular,Z_Param_OwnerTarget);
	P_GET_OBJECT(UInteractorComponent,Z_Param_InteractorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OwnInteractorEndOvelrap_Implementation(Z_Param_OwnerTarget,Z_Param_InteractorComponent);
	P_NATIVE_END;
}
// End Class UModuleDisplayTarget Function OwnInteractorEndOvelrap

// Begin Class UModuleDisplayTarget
void UModuleDisplayTarget::StaticRegisterNativesUModuleDisplayTarget()
{
	UClass* Class = UModuleDisplayTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisplayTick", &UModuleDisplayTarget::execDisplayTick },
		{ "FocusGet", &UModuleDisplayTarget::execFocusGet },
		{ "FocusLose", &UModuleDisplayTarget::execFocusLose },
		{ "OwnInteractorBeginOvelrap", &UModuleDisplayTarget::execOwnInteractorBeginOvelrap },
		{ "OwnInteractorEndOvelrap", &UModuleDisplayTarget::execOwnInteractorEndOvelrap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModuleDisplayTarget);
UClass* Z_Construct_UClass_UModuleDisplayTarget_NoRegister()
{
	return UModuleDisplayTarget::StaticClass();
}
struct Z_Construct_UClass_UModuleDisplayTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interaction Target Functional Module" },
		{ "IncludePath", "TargetModular/Modules/ModuleDisplayTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsClass_MetaData[] = {
		{ "Category", "ModuleDisplayTarget" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleDisplayTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModuleDisplayTarget_DisplayTick, "DisplayTick" }, // 708194498
		{ &Z_Construct_UFunction_UModuleDisplayTarget_FocusGet, "FocusGet" }, // 2175899086
		{ &Z_Construct_UFunction_UModuleDisplayTarget_FocusLose, "FocusLose" }, // 409137558
		{ &Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorBeginOvelrap, "OwnInteractorBeginOvelrap" }, // 1748883746
		{ &Z_Construct_UFunction_UModuleDisplayTarget_OwnInteractorEndOvelrap, "OwnInteractorEndOvelrap" }, // 28581212
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModuleDisplayTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModuleDisplayTarget_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModuleDisplayTarget, SettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UModularDisplaySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsClass_MetaData), NewProp_SettingsClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModuleDisplayTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModuleDisplayTarget_Statics::NewProp_SettingsClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleDisplayTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModuleDisplayTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModuleBaseTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleDisplayTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModuleDisplayTarget_Statics::ClassParams = {
	&UModuleDisplayTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModuleDisplayTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModuleDisplayTarget_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleDisplayTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UModuleDisplayTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModuleDisplayTarget()
{
	if (!Z_Registration_Info_UClass_UModuleDisplayTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModuleDisplayTarget.OuterSingleton, Z_Construct_UClass_UModuleDisplayTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModuleDisplayTarget.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UModuleDisplayTarget>()
{
	return UModuleDisplayTarget::StaticClass();
}
UModuleDisplayTarget::UModuleDisplayTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModuleDisplayTarget);
UModuleDisplayTarget::~UModuleDisplayTarget() {}
// End Class UModuleDisplayTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDisplaySettings, UModularDisplaySettings::StaticClass, TEXT("UModularDisplaySettings"), &Z_Registration_Info_UClass_UModularDisplaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDisplaySettings), 180920211U) },
		{ Z_Construct_UClass_UModuleDisplayTarget, UModuleDisplayTarget::StaticClass, TEXT("UModuleDisplayTarget"), &Z_Registration_Info_UClass_UModuleDisplayTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModuleDisplayTarget), 1000599324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_2315813219(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleDisplayTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
