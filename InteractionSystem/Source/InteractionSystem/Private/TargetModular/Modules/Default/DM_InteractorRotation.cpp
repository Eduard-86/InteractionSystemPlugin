// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetModular\Modules\Default\DM_InteractorRotation.h"

#include "Kismet/KismetMathLibrary.h"

UDM_InteractorRotation::UDM_InteractorRotation()
{
	SettingsClass = UDS_InteractorRotation::StaticClass();
}

void UDM_InteractorRotation::ExecuteActionEvent_Implementation(UModularSettingsBase* SettingsBlackboard,
	UInteractionTargetCollisionModular* OwnerInteraction)
{
	Super::ExecuteActionEvent_Implementation(SettingsBlackboard, OwnerInteraction);

	if (UDS_InteractorRotation* Setting =
		Cast<UDS_InteractorRotation>(SettingsBlackboard))
	{
		ModuleInteractorDeltaRotationXY = Setting->InteractorDeltaRotationXY;
		ModuleOwnerInteract = OwnerInteraction;

		SetEnableFocus(true);
	}
}


float UDM_InteractorRotation::GetFocus_Implementation(const UInteractorComponent* TargetComponent) const
{
	FRotator TempRot =
	UKismetMathLibrary::MakeRotFromX(
		ModuleOwnerInteract->GetComponentLocation() -
		TargetComponent->GetComponentLocation());

	float AbsRot = UKismetMathLibrary::Abs(TempRot.Yaw - TargetComponent->GetComponentRotation().Yaw);

	return 1 - FMath::Clamp<float>(AbsRot / ModuleInteractorDeltaRotationXY,
		0.f,
		1.f);
}
