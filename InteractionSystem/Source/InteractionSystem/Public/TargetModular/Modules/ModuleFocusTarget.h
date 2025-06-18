// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModuleBaseTarget.h"

#include "ModuleFocusTarget.generated.h"

UENUM(BlueprintType)
enum class ELogicFocusType : uint8 {
	Standard,
	HalfLogical,
	Logical,
};

UCLASS(meta = (DisplayName = "Interaction Target Focus Module Settings")) // , DefaultToInstanced , editinlinenew
class UModularSettings : public UModularSettingsBase
{
	GENERATED_BODY()

public:
//protected:


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
		float FocusMultiplier = 1.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
		float FocusBias = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
		bool IsDebug = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
		ELogicFocusType LogicWorkType = ELogicFocusType::Standard;

};

/**
 * 
 */ 
UCLASS(Blueprintable, Abstract, meta = (DisplayName = "Interaction Target Focus Module"))
class INTERACTIONSYSTEM_API UModuleFocusTarget : public UModuleBaseTarget
{
	GENERATED_BODY()

	friend UInteractionTargetCollisionModular;

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<UModularSettings> SettingsClass = UModularSettings::StaticClass();


public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	float GetFocus(const UInteractorComponent* TargetComponent);


public:

	//UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	//float FocusMultiplier = 1.f;

	//UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	//float FocusBias = 0.f;

protected:

	virtual float GetFocus_Implementation(const UInteractorComponent* TargetComponent) const { return 0; };

	ELogicFocusType ModuleLogicWorkType = ELogicFocusType::Standard;

};
