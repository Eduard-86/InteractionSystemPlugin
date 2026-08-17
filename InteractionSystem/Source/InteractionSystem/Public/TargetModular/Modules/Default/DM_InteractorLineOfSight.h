// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetModular/Modules/ModuleFocusTarget.h"

#include "DM_InteractorLineOfSight.generated.h"

/**
 * 
 */ 
UCLASS(Blueprintable, meta = (DisplayName = "LineOfSight"))
class INTERACTIONSYSTEM_API UDM_InteractorLineOfSight : public UModuleFocusTarget
{
	GENERATED_BODY()

	UDM_InteractorLineOfSight();

	friend UInteractionTargetCollisionModular;

protected:

	virtual float GetFocus_Implementation(const UInteractorComponent* TargetComponent) const;

	virtual void Init_Implementation(const UInteractionTargetCollisionModular* OwnerTarget)
	{
		Super::Init_Implementation(OwnerTarget);
		SetEnableFocus(true);
	};

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LineOfSight Settings", meta = (ExposeOnSpawn = true))
	ACharacter* TraceChar;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LineOfSight Settings", meta = (ExposeOnSpawn = true))
	FComponentReference TraceStartComponent;

	// If TraceStartComponent is a SkeletalMesh, use the specified bone's world location as the trace origin.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LineOfSight Settings", meta = (ExposeOnSpawn = true))
	FName BoneName = "None";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LineOfSight Settings", meta = (ExposeOnSpawn = true))
	float SphereTraceRadius = 10.f;

};
