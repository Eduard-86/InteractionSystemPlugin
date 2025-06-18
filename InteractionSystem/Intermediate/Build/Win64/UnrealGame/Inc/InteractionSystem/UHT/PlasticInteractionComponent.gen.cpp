// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/PlasticInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlasticInteractionComponent() {}

// Begin Cross Module References
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetComponent();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UPlasticInteractionComponent();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UPlasticInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Class UPlasticInteractionComponent
void UPlasticInteractionComponent::StaticRegisterNativesUPlasticInteractionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlasticInteractionComponent);
UClass* Z_Construct_UClass_UPlasticInteractionComponent_NoRegister()
{
	return UPlasticInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UPlasticInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "PlasticInteractionTargetCpp" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PlasticInteractionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlasticInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlasticInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlasticInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionTargetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlasticInteractionComponent_Statics::ClassParams = {
	&UPlasticInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlasticInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlasticInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UPlasticInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlasticInteractionComponent.OuterSingleton, Z_Construct_UClass_UPlasticInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlasticInteractionComponent.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UPlasticInteractionComponent>()
{
	return UPlasticInteractionComponent::StaticClass();
}
UPlasticInteractionComponent::UPlasticInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlasticInteractionComponent);
UPlasticInteractionComponent::~UPlasticInteractionComponent() {}
// End Class UPlasticInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_PlasticInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlasticInteractionComponent, UPlasticInteractionComponent::StaticClass, TEXT("UPlasticInteractionComponent"), &Z_Registration_Info_UClass_UPlasticInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlasticInteractionComponent), 1462591276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_PlasticInteractionComponent_h_671363879(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_PlasticInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_PlasticInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
