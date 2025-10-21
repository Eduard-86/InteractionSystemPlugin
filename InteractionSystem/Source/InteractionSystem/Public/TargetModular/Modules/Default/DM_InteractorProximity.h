// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetModular/Modules/ModuleFocusTarget.h"

#include "DM_InteractorProximity.generated.h"

/**
 * 
 */ 
UCLASS(Blueprintable, meta = (DisplayName = "DM_InteractorProximity"))
class INTERACTIONSYSTEM_API UDM_InteractorProximity : public UModuleFocusTarget
{
	GENERATED_BODY()

	UDM_InteractorProximity(); 

	friend UInteractionTargetCollisionModular;

protected:

	virtual float GetFocus_Implementation(const UInteractorComponent* TargetComponent) const;

	virtual void Init_Implementation(const UInteractionTargetCollisionModular* OwnerTarget)
	{
		Super::Init_Implementation(OwnerTarget);
		SetEnableFocus(true);
	};

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Proximity Settings", meta = (ExposeOnSpawn = true))
	float ModuleInteractorProximityThreshold = 200.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Proximity Settings", meta = (ExposeOnSpawn = true))
	bool ModuleIgnoreDeltaZ = false;

};
