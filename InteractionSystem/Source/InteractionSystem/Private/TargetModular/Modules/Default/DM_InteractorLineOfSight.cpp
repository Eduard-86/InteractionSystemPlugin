// Fill out your copyright notice in the Description page of Project Settings.
#include "TargetModular/Modules/Default/DM_InteractorLineOfSight.h"

#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Character.h"



UDM_InteractorLineOfSight::UDM_InteractorLineOfSight()
{
	//Super::Super();
}


float UDM_InteractorLineOfSight::GetFocus_Implementation(const UInteractorComponent* TargetComponent) const
{

	FVector StartLocation = FVector::ZeroVector;


	if (USkeletalMeshComponent* SkeletComp = Cast<USkeletalMeshComponent>(TraceStartComponent.GetComponent(TraceChar)))
	{
		StartLocation = SkeletComp->GetBoneLocation(BoneName, EBoneSpaces::WorldSpace);
	}
	else if (USceneComponent* SphereComponent = Cast<USceneComponent>(TraceStartComponent.GetComponent(TraceChar)))
	{
		StartLocation = SphereComponent->GetComponentLocation();
	}


	FHitResult HitResult;

	TArray<AActor*> ActorsToIgnore = { TraceChar };

	EDrawDebugTrace::Type DrawType = EDrawDebugTrace::None;

	if (IsDebug)
	{
		DrawType = EDrawDebugTrace::ForOneFrame;
	}
	

	bool bIsHit = UKismetSystemLibrary::SphereTraceSingle(
		GetWorld(),
		StartLocation,
		OwnerInteractTarget->GetComponentLocation(),
		SphereTraceRadius,
		UEngineTypes::ConvertToTraceType(ECC_Visibility),
		true, // bTraceComplex
		ActorsToIgnore,
		DrawType,
		HitResult,
		false // bIgnoreSelf
	);

	return HitResult.GetActor() == OwnerInteractTarget->GetOwner() ? 1.0f : 0.0f;
}
