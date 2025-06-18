// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetModular/Modules/ModuleFocusTarget.h"

#include "DM_InteractorProximity.generated.h"



UCLASS(Blueprintable, meta = (DisplayName = "DS_InteractorProximity")) // , DefaultToInstanced , editinlinenew
class UDS_InteractorProximity : public UModularSettings
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Proximity Settings", meta = (ExposeOnSpawn = true))
	float InteractorProximityThreshold = 200.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Proximity Settings", meta = (ExposeOnSpawn = true))
	bool IgnoreDeltaZ = false;
	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
	bool IgnoreDeltaZ = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
	bool IsDebug = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
	ELogicFocusType LogicWorkType = ELogicFocusType::Standard;
	*/
};

/**
 * 
 */ 
UCLASS(Blueprintable, meta = (DisplayName = "DM_InteractorProximity"))
class INTERACTIONSYSTEM_API UDM_InteractorProximity : public UModuleFocusTarget
{
	GENERATED_BODY()

	UDM_InteractorProximity(); 


	friend UInteractionTargetCollisionModular;

public:

protected:

	virtual float GetFocus_Implementation(const UInteractorComponent* TargetComponent) const;

	virtual	void ExecuteActionEvent_Implementation(UModularSettingsBase* SettingsBlackboard, UPARAM(DisplayName = "Owner") UInteractionTargetCollisionModular* OwnerInteraction);

protected:

	bool ModuleIgnoreDeltaZ = false;
	float ModuleInteractorProximityThreshold = 200.f;
	TObjectPtr<UInteractionTargetCollisionModular> ModuleOwnerInteract;

};
