// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetModular/Modules/ModuleFocusTarget.h"

#include "DM_InteractorRotation.generated.h"

UCLASS(Blueprintable, meta = (DisplayName = "DS_InteractorRotation")) // , DefaultToInstanced , editinlinenew
class UDS_InteractorRotation : public UModularSettings
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Proximity Settings", meta = (ExposeOnSpawn = true))
	float InteractorDeltaRotationXY = 45.0f;

};

/**
 * 
 */ 
UCLASS(Blueprintable, meta = (DisplayName = "DM_InteractorRotation"))
class INTERACTIONSYSTEM_API UDM_InteractorRotation : public UModuleFocusTarget
{
	GENERATED_BODY()

	UDM_InteractorRotation();

	friend UInteractionTargetCollisionModular;

protected:

	virtual float GetFocus_Implementation(const UInteractorComponent* TargetComponent) const;

	virtual	void ExecuteActionEvent_Implementation(UModularSettingsBase* SettingsBlackboard, UPARAM(DisplayName = "Owner") UInteractionTargetCollisionModular* OwnerInteraction);

protected:

	float ModuleInteractorDeltaRotationXY = 45.0f;
	TObjectPtr<UInteractionTargetCollisionModular> ModuleOwnerInteract;
	
};

