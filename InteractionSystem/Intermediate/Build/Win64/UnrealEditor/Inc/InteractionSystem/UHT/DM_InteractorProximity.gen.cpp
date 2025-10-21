// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetModular/Modules/Default/DM_InteractorProximity.h"
#include "InteractionSystem/Public/TargetModular/InteractionTargetCollisionModular.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDM_InteractorProximity() {}

// Begin Cross Module References
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UDM_InteractorProximity();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UDM_InteractorProximity_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UModuleFocusTarget();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Class UDM_InteractorProximity
void UDM_InteractorProximity::StaticRegisterNativesUDM_InteractorProximity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDM_InteractorProximity);
UClass* Z_Construct_UClass_UDM_InteractorProximity_NoRegister()
{
	return UDM_InteractorProximity::StaticClass();
}
struct Z_Construct_UClass_UDM_InteractorProximity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "DM_InteractorProximity" },
		{ "IncludePath", "TargetModular/Modules/Default/DM_InteractorProximity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/Default/DM_InteractorProximity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInteractorProximityThreshold_MetaData[] = {
		{ "Category", "Proximity Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/Default/DM_InteractorProximity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleIgnoreDeltaZ_MetaData[] = {
		{ "Category", "Proximity Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetModular/Modules/Default/DM_InteractorProximity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModuleInteractorProximityThreshold;
	static void NewProp_ModuleIgnoreDeltaZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ModuleIgnoreDeltaZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDM_InteractorProximity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDM_InteractorProximity_Statics::NewProp_ModuleInteractorProximityThreshold = { "ModuleInteractorProximityThreshold", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDM_InteractorProximity, ModuleInteractorProximityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleInteractorProximityThreshold_MetaData), NewProp_ModuleInteractorProximityThreshold_MetaData) };
void Z_Construct_UClass_UDM_InteractorProximity_Statics::NewProp_ModuleIgnoreDeltaZ_SetBit(void* Obj)
{
	((UDM_InteractorProximity*)Obj)->ModuleIgnoreDeltaZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDM_InteractorProximity_Statics::NewProp_ModuleIgnoreDeltaZ = { "ModuleIgnoreDeltaZ", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDM_InteractorProximity), &Z_Construct_UClass_UDM_InteractorProximity_Statics::NewProp_ModuleIgnoreDeltaZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleIgnoreDeltaZ_MetaData), NewProp_ModuleIgnoreDeltaZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDM_InteractorProximity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDM_InteractorProximity_Statics::NewProp_ModuleInteractorProximityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDM_InteractorProximity_Statics::NewProp_ModuleIgnoreDeltaZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDM_InteractorProximity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDM_InteractorProximity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModuleFocusTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDM_InteractorProximity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDM_InteractorProximity_Statics::ClassParams = {
	&UDM_InteractorProximity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDM_InteractorProximity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDM_InteractorProximity_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDM_InteractorProximity_Statics::Class_MetaDataParams), Z_Construct_UClass_UDM_InteractorProximity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDM_InteractorProximity()
{
	if (!Z_Registration_Info_UClass_UDM_InteractorProximity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDM_InteractorProximity.OuterSingleton, Z_Construct_UClass_UDM_InteractorProximity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDM_InteractorProximity.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UDM_InteractorProximity>()
{
	return UDM_InteractorProximity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDM_InteractorProximity);
UDM_InteractorProximity::~UDM_InteractorProximity() {}
// End Class UDM_InteractorProximity

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorProximity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDM_InteractorProximity, UDM_InteractorProximity::StaticClass, TEXT("UDM_InteractorProximity"), &Z_Registration_Info_UClass_UDM_InteractorProximity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDM_InteractorProximity), 1075552526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorProximity_h_622724090(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorProximity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetModular_Modules_Default_DM_InteractorProximity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
