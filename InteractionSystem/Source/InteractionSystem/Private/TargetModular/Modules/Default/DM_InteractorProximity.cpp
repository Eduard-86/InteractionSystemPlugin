// Fill out your copyright notice in the Description page of Project Settings.
#include "TargetModular\Modules\Default\DM_InteractorProximity.h"

UDM_InteractorProximity::UDM_InteractorProximity()
{
	//Super::Super();
}


float UDM_InteractorProximity::GetFocus_Implementation(const UInteractorComponent* TargetComponent) const
{
	FVector ProximityVector = FVector::ZeroVector;

	if(!IsValid(OwnerInteractTarget))
	{
		return 0;
	}
	
	if(ModuleIgnoreDeltaZ)
	{
		ProximityVector = FVector(
			OwnerInteractTarget->GetComponentLocation().X -
			TargetComponent->GetComponentLocation().X, 
			OwnerInteractTarget->GetComponentLocation().Y -
			TargetComponent->GetComponentLocation().Y, 
			0);
	}
	else
	{
		ProximityVector = OwnerInteractTarget->GetComponentLocation() -
			TargetComponent->GetComponentLocation();
	}

	return 1 - FMath::Clamp<float>(ProximityVector.Length() / ModuleInteractorProximityThreshold
		, 0.f
		, 1.f);
}
