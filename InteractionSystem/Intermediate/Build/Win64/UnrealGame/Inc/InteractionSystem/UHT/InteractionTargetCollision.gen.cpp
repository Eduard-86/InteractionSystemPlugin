// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Public/TargetCollision/InteractionTargetCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionTargetCollision() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollision();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetCollision_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionTargetComponent();
INTERACTIONSYSTEM_API UEnum* Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References

// Begin Enum ECollisionInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionInteractionType;
static UEnum* ECollisionInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType, (UObject*)Z_Construct_UPackage__Script_InteractionSystem(), TEXT("ECollisionInteractionType"));
	}
	return Z_Registration_Info_UEnum_ECollisionInteractionType.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UEnum* StaticEnum<ECollisionInteractionType>()
{
	return ECollisionInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CreateSphere.Comment", "/*\n    VE_SimpleAnalis\x09\x09\x09  UMETA(DisplayName = \"SimpleAnalis\"),\n    CollisionUsageMode\n    */" },
		{ "CreateSphere.Name", "ECollisionInteractionType::CreateSphere" },
		{ "CreateSphere.ToolTip", "VE_SimpleAnalis                      UMETA(DisplayName = \"SimpleAnalis\"),\nCollisionUsageMode" },
		{ "ManualAttachment.Name", "ECollisionInteractionType::ManualAttachment" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
		{ "UseChild.Name", "ECollisionInteractionType::UseChild" },
		{ "UseParent.Name", "ECollisionInteractionType::UseParent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionInteractionType::CreateSphere", (int64)ECollisionInteractionType::CreateSphere },
		{ "ECollisionInteractionType::UseChild", (int64)ECollisionInteractionType::UseChild },
		{ "ECollisionInteractionType::UseParent", (int64)ECollisionInteractionType::UseParent },
		{ "ECollisionInteractionType::ManualAttachment", (int64)ECollisionInteractionType::ManualAttachment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractionSystem,
	nullptr,
	"ECollisionInteractionType",
	"ECollisionInteractionType",
	Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType()
{
	if (!Z_Registration_Info_UEnum_ECollisionInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionInteractionType.InnerSingleton, Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionInteractionType.InnerSingleton;
}
// End Enum ECollisionInteractionType

// Begin Class UInteractionTargetCollision
void UInteractionTargetCollision::StaticRegisterNativesUInteractionTargetCollision()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionTargetCollision);
UClass* Z_Construct_UClass_UInteractionTargetCollision_NoRegister()
{
	return UInteractionTargetCollision::StaticClass();
}
struct Z_Construct_UClass_UInteractionTargetCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interaction Target With Collision" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TargetCollision/InteractionTargetCollision.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionUsageMode_MetaData[] = {
		{ "Category", "CollisionTarget" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "CollisionTarget" },
		{ "EditCondition", "CollisionUsageMode==ECollisionInteractionType::CreateSphere" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionColor_MetaData[] = {
		{ "Category", "CollisionTarget" },
		{ "EditCondition", "CollisionUsageMode==ECollisionInteractionType::CreateSphere" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHiddenCollision_MetaData[] = {
		{ "Category", "CollisionTarget" },
		{ "EditCondition", "CollisionUsageMode==ECollisionInteractionType::CreateSphere" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *Component for attach sphere collision, if component will be nullptr,\n     *component will attach on root component own actor.\n     *///UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))\n//TObjectPtr<USceneComponent> AttachComponent;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetCollision/InteractionTargetCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component for attach sphere collision, if component will be nullptr,\ncomponent will attach on root component own actor.\n     //UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))\n//TObjectPtr<USceneComponent> AttachComponent;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionUsageMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionUsageMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionColor;
	static void NewProp_IsHiddenCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHiddenCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionTargetCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionUsageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionUsageMode = { "CollisionUsageMode", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollision, CollisionUsageMode), Z_Construct_UEnum_InteractionSystem_ECollisionInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionUsageMode_MetaData), NewProp_CollisionUsageMode_MetaData) }; // 2927109295
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollision, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionColor = { "CollisionColor", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollision, CollisionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionColor_MetaData), NewProp_CollisionColor_MetaData) };
void Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_IsHiddenCollision_SetBit(void* Obj)
{
	((UInteractionTargetCollision*)Obj)->IsHiddenCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_IsHiddenCollision = { "IsHiddenCollision", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionTargetCollision), &Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_IsHiddenCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHiddenCollision_MetaData), NewProp_IsHiddenCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionTargetCollision, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionTargetCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionUsageMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionUsageMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_IsHiddenCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionTargetCollision_Statics::NewProp_CollisionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionTargetCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionTargetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionTargetCollision_Statics::ClassParams = {
	&UInteractionTargetCollision::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractionTargetCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollision_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionTargetCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionTargetCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionTargetCollision()
{
	if (!Z_Registration_Info_UClass_UInteractionTargetCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionTargetCollision.OuterSingleton, Z_Construct_UClass_UInteractionTargetCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionTargetCollision.OuterSingleton;
}
template<> INTERACTIONSYSTEM_API UClass* StaticClass<UInteractionTargetCollision>()
{
	return UInteractionTargetCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionTargetCollision);
UInteractionTargetCollision::~UInteractionTargetCollision() {}
// End Class UInteractionTargetCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECollisionInteractionType_StaticEnum, TEXT("ECollisionInteractionType"), &Z_Registration_Info_UEnum_ECollisionInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2927109295U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionTargetCollision, UInteractionTargetCollision::StaticClass, TEXT("UInteractionTargetCollision"), &Z_Registration_Info_UClass_UInteractionTargetCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionTargetCollision), 2983591991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_3429197243(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeneralProt_Plugins_TEO_Library_PL_InteractionSystem_Source_InteractionSystem_Public_TargetCollision_InteractionTargetCollision_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
