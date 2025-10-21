// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetModular/Modules/ModuleFocusTarget.h"

#include "DM_InteractorRotation.generated.h"


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

	void Init_Implementation(const UInteractionTargetCollisionModular* OwnerTarget)
	{
		Super::Init_Implementation(OwnerTarget);
		SetEnableFocus(true);
	};

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Proximity Settings", meta = (ExposeOnSpawn = true))
	float ModuleInteractorDeltaRotationXY = 45.0f;

};

