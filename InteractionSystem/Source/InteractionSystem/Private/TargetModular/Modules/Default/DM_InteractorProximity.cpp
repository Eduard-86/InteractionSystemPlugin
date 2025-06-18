// Fill out your copyright notice in the Description page of Project Settings.
#include "TargetModular\Modules\Default\DM_InteractorProximity.h"

UDM_InteractorProximity::UDM_InteractorProximity()
{
	//Super::Super();
	SettingsClass = UDS_InteractorProximity::StaticClass();
}

void UDM_InteractorProximity::ExecuteActionEvent_Implementation(UModularSettingsBase* SettingsBlackboard,
	UInteractionTargetCollisionModular* OwnerInteraction)
{
	Super::ExecuteActionEvent_Implementation(SettingsBlackboard, OwnerInteraction);

	if(UDS_InteractorProximity* Setting = 
		Cast<UDS_InteractorProximity>(SettingsBlackboard))
	{
		ModuleInteractorProximityThreshold = Setting->InteractorProximityThreshold;
		ModuleIgnoreDeltaZ = Setting->IgnoreDeltaZ;
		ModuleOwnerInteract = OwnerInteraction;

		SetEnableFocus(true);
	}
	
}



float UDM_InteractorProximity::GetFocus_Implementation(const UInteractorComponent* TargetComponent) const
{
	FVector ProximityVector = FVector::ZeroVector;

	if(ModuleIgnoreDeltaZ)
	{
		ProximityVector = FVector(
			ModuleOwnerInteract->GetComponentLocation().X -
			TargetComponent->GetComponentLocation().X, 
			ModuleOwnerInteract->GetComponentLocation().Y -
			TargetComponent->GetComponentLocation().Y, 
			0);
	}
	else
	{
		ProximityVector = ModuleOwnerInteract->GetComponentLocation() -
			TargetComponent->GetComponentLocation();
	}

	return 1 - FMath::Clamp<float>(ProximityVector.Length() / ModuleInteractorProximityThreshold
		, 0.f
		, 1.f);
}
