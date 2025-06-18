// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/Modules/Default/DM_InteractorRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDM_InteractorRotation() {}

// Begin Cross Module References
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UDM_InteractorRotation();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UDM_InteractorRotation_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UDS_InteractorRotation();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UDS_InteractorRotation_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModularSettings();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleFocusTarget();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Class UDS_InteractorRotation
void UDS_InteractorRotation::StaticRegisterNativesUDS_InteractorRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS_InteractorRotation);
UClass* Z_Construct_UClass_UDS_InteractorRotation_NoRegister()
{
	return UDS_InteractorRotation::StaticClass();
}
struct Z_Construct_UClass_UDS_InteractorRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "DS_InteractorRotation" },
		{ "IncludePath", "TargetModular/Modules/Default/DM_InteractorRotation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/Default/DM_InteractorRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorDeltaRotationXY_MetaData[] = {
		{ "Category", "Proximity Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/Default/DM_InteractorRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractorDeltaRotationXY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS_InteractorRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS_InteractorRotation_Statics::NewProp_InteractorDeltaRotationXY = { "InteractorDeltaRotationXY", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS_InteractorRotation, InteractorDeltaRotationXY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorDeltaRotationXY_MetaData), NewProp_InteractorDeltaRotationXY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS_InteractorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS_InteractorRotation_Statics::NewProp_InteractorDeltaRotationXY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_InteractorRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS_InteractorRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModularSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_InteractorRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS_InteractorRotation_Statics::ClassParams = {
	&UDS_InteractorRotation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS_InteractorRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS_InteractorRotation_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_InteractorRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS_InteractorRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS_InteractorRotation()
{
	if (!Z_Registration_Info_UClass_UDS_InteractorRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS_InteractorRotation.OuterSingleton, Z_Construct_UClass_UDS_InteractorRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS_InteractorRotation.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UDS_InteractorRotation>()
{
	return UDS_InteractorRotation::StaticClass();
}
UDS_InteractorRotation::UDS_InteractorRotation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS_InteractorRotation);
UDS_InteractorRotation::~UDS_InteractorRotation() {}
// End Class UDS_InteractorRotation

// Begin Class UDM_InteractorRotation
void UDM_InteractorRotation::StaticRegisterNativesUDM_InteractorRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDM_InteractorRotation);
UClass* Z_Construct_UClass_UDM_InteractorRotation_NoRegister()
{
	return UDM_InteractorRotation::StaticClass();
}
struct Z_Construct_UClass_UDM_InteractorRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "DM_InteractorRotation" },
		{ "IncludePath", "TargetModular/Modules/Default/DM_InteractorRotation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/Default/DM_InteractorRotation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDM_InteractorRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDM_InteractorRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModuleFocusTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDM_InteractorRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDM_InteractorRotation_Statics::ClassParams = {
	&UDM_InteractorRotation::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDM_InteractorRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDM_InteractorRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDM_InteractorRotation()
{
	if (!Z_Registration_Info_UClass_UDM_InteractorRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDM_InteractorRotation.OuterSingleton, Z_Construct_UClass_UDM_InteractorRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDM_InteractorRotation.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UDM_InteractorRotation>()
{
	return UDM_InteractorRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDM_InteractorRotation);
UDM_InteractorRotation::~UDM_InteractorRotation() {}
// End Class UDM_InteractorRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS_InteractorRotation, UDS_InteractorRotation::StaticClass, TEXT("UDS_InteractorRotation"), &Z_Registration_Info_UClass_UDS_InteractorRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS_InteractorRotation), 319634907U) },
		{ Z_Construct_UClass_UDM_InteractorRotation, UDM_InteractorRotation::StaticClass, TEXT("UDM_InteractorRotation"), &Z_Registration_Info_UClass_UDM_InteractorRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDM_InteractorRotation), 470872339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorRotation_h_3786676982(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
