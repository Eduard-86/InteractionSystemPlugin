// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetModular\Modules\Default\DM_InteractorRotation.h"

#include "Kismet/KismetMathLibrary.h"

UDM_InteractorRotation::UDM_InteractorRotation()
{

}

float UDM_InteractorRotation::GetFocus_Implementation(const UInteractorComponent* TargetComponent) const
{
	if (!IsValid(OwnerInteractTarget))
	{
		return 0;
	}

	FRotator TempRot =
	UKismetMathLibrary::MakeRotFromX(
		OwnerInteractTarget->GetComponentLocation() -
		TargetComponent->GetComponentLocation());

	float AbsRot = UKismetMathLibrary::Abs(TempRot.Yaw - TargetComponent->GetComponentRotation().Yaw);

	return 1 - FMath::Clamp<float>(AbsRot / ModuleInteractorDeltaRotationXY,
		0.f,
		1.f);
}
