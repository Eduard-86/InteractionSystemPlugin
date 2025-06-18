// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/Modules/ModuleFocusTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModuleFocusTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettings();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettings_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettingsBase();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleBaseTarget();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleFocusTarget();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleFocusTarget_NoRegister();
INTERACTIONSYSTEM_API UEnum* Z_Construct_UEnum_InteractionSystem_ELogicFocusType();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Enum ELogicFocusType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELogicFocusType;
static UEnum* ELogicFocusType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELogicFocusType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELogicFocusType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractionSystem_ELogicFocusType, (UObject*)Z_Construct_UPackage__Script_InteractionSystem(), TEXT("ELogicFocusType"));
	}
	return Z_Registration_Info_UEnum_ELogicFocusType.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<ELogicFocusType>()
{
	return ELogicFocusType_StaticEnum();
}
struct Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HalfLogical.Name", "ELogicFocusType::HalfLogical" },
		{ "Logical.Name", "ELogicFocusType::Logical" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
		{ "Standard.Name", "ELogicFocusType::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELogicFocusType::Standard", (int64)ELogicFocusType::Standard },
		{ "ELogicFocusType::HalfLogical", (int64)ELogicFocusType::HalfLogical },
		{ "ELogicFocusType::Logical", (int64)ELogicFocusType::Logical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem,
	nullptr,
	"ELogicFocusType",
	"ELogicFocusType",
	Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractionSystem_ELogicFocusType()
{
	if (!Z_Registration_Info_UEnum_ELogicFocusType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELogicFocusType.InnerSingleton, Z_Construct_UEnum_InteractionSystem_ELogicFocusType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELogicFocusType.InnerSingleton;
}
// End Enum ELogicFocusType

// Begin Class UModularSettings
void UModularSettings::StaticRegisterNativesUModularSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularSettings);
UClass* Z_Construct_UClass_UModularSettings_NoRegister()
{
	return UModularSettings::StaticClass();
}
struct Z_Construct_UClass_UModularSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Interaction Target Focus Module Settings" },
		{ "IncludePath", "TargetModular/Modules/ModuleFocusTarget.h" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusMultiplier_MetaData[] = {
		{ "Category", "Default Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//protected:\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "protected:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusBias_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDebug_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicWorkType_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusBias;
	static void NewProp_IsDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDebug;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogicWorkType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogicWorkType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UModularSettings_Statics::NewProp_FocusMultiplier = { "FocusMultiplier", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettings, FocusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusMultiplier_MetaData), NewProp_FocusMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UModularSettings_Statics::NewProp_FocusBias = { "FocusBias", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettings, FocusBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusBias_MetaData), NewProp_FocusBias_MetaData) };
void Z_Construct_UClass_UModularSettings_Statics::NewProp_IsDebug_SetBit(void* Obj)
{
	((UModularSettings*)Obj)->IsDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModularSettings_Statics::NewProp_IsDebug = { "IsDebug", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularSettings), &Z_Construct_UClass_UModularSettings_Statics::NewProp_IsDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDebug_MetaData), NewProp_IsDebug_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModularSettings_Statics::NewProp_LogicWorkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModularSettings_Statics::NewProp_LogicWorkType = { "LogicWorkType", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettings, LogicWorkType), Z_Construct_UEnum_InteractionSystem_ELogicFocusType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicWorkType_MetaData), NewProp_LogicWorkType_MetaData) }; // 4241112352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettings_Statics::NewProp_FocusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettings_Statics::NewProp_FocusBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettings_Statics::NewProp_IsDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettings_Statics::NewProp_LogicWorkType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettings_Statics::NewProp_LogicWorkType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModularSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularSettings_Statics::ClassParams = {
	&UModularSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularSettings()
{
	if (!Z_Registration_Info_UClass_UModularSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularSettings.OuterSingleton, Z_Construct_UClass_UModularSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularSettings.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UModularSettings>()
{
	return UModularSettings::StaticClass();
}
UModularSettings::UModularSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSettings);
UModularSettings::~UModularSettings() {}
// End Class UModularSettings

// Begin Class UModuleFocusTarget Function GetFocus
struct ModuleFocusTarget_eventGetFocus_Parms
{
	const UInteractorComponent* TargetComponent;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ModuleFocusTarget_eventGetFocus_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UModuleFocusTarget_GetFocus = FName(TEXT("GetFocus"));
float UModuleFocusTarget::GetFocus(const UInteractorComponent* TargetComponent)
{
	ModuleFocusTarget_eventGetFocus_Parms Parms;
	Parms.TargetComponent=TargetComponent;
	ProcessEvent(FindFunctionChecked(NAME_UModuleFocusTarget_GetFocus),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleFocusTarget_eventGetFocus_Parms, TargetComponent), Z_Construct_UClass_UInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModuleFocusTarget_eventGetFocus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModuleFocusTarget, nullptr, "GetFocus", nullptr, nullptr, Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::PropPointers), sizeof(ModuleFocusTarget_eventGetFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModuleFocusTarget_eventGetFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModuleFocusTarget_GetFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModuleFocusTarget_GetFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModuleFocusTarget::execGetFocus)
{
	P_GET_OBJECT(UInteractorComponent,Z_Param_TargetComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFocus_Implementation(Z_Param_TargetComponent);
	P_NATIVE_END;
}
// End Class UModuleFocusTarget Function GetFocus

// Begin Class UModuleFocusTarget
void UModuleFocusTarget::StaticRegisterNativesUModuleFocusTarget()
{
	UClass* Class = UModuleFocusTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFocus", &UModuleFocusTarget::execGetFocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModuleFocusTarget);
UClass* Z_Construct_UClass_UModuleFocusTarget_NoRegister()
{
	return UModuleFocusTarget::StaticClass();
}
struct Z_Construct_UClass_UModuleFocusTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Interaction Target Focus Module" },
		{ "IncludePath", "TargetModular/Modules/ModuleFocusTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsClass_MetaData[] = {
		{ "Category", "ModuleFocusTarget" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/ModuleFocusTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModuleFocusTarget_GetFocus, "GetFocus" }, // 802743426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModuleFocusTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModuleFocusTarget_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModuleFocusTarget, SettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UModularSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsClass_MetaData), NewProp_SettingsClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModuleFocusTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModuleFocusTarget_Statics::NewProp_SettingsClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleFocusTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModuleFocusTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModuleBaseTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleFocusTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModuleFocusTarget_Statics::ClassParams = {
	&UModuleFocusTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModuleFocusTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModuleFocusTarget_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModuleFocusTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UModuleFocusTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModuleFocusTarget()
{
	if (!Z_Registration_Info_UClass_UModuleFocusTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModuleFocusTarget.OuterSingleton, Z_Construct_UClass_UModuleFocusTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModuleFocusTarget.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UModuleFocusTarget>()
{
	return UModuleFocusTarget::StaticClass();
}
UModuleFocusTarget::UModuleFocusTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModuleFocusTarget);
UModuleFocusTarget::~UModuleFocusTarget() {}
// End Class UModuleFocusTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELogicFocusType_StaticEnum, TEXT("ELogicFocusType"), &Z_Registration_Info_UEnum_ELogicFocusType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4241112352U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularSettings, UModularSettings::StaticClass, TEXT("UModularSettings"), &Z_Registration_Info_UClass_UModularSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularSettings), 716479067U) },
		{ Z_Construct_UClass_UModuleFocusTarget, UModuleFocusTarget::StaticClass, TEXT("UModuleFocusTarget"), &Z_Registration_Info_UClass_UModuleFocusTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModuleFocusTarget), 750037059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_1860064387(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_ModuleFocusTarget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
