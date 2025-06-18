#include "InteractionTargetComponent.h"
#include "InteractorComponent.h"
#include "Components/ShapeComponent.h"
#include "GameFramework/Character.h"

void UInteractionTargetComponent::BeginPlay()
{
    Super::BeginPlay();

	USceneComponent* PerentComponent = GetAttachParent();

	if(PerentComponent != nullptr && TargetCollision == nullptr)
	{
		ReattachParentCollision(Cast<UShapeComponent>(PerentComponent));
	}
		
	/*
	if (AActor* OwnActor = GetOwner())
	{
		TArray<AActor*> ActorsOverlapingArray;
		OwnActor->GetOverlappingActors(ActorsOverlapingArray);

		for (AActor* Actor : ActorsOverlapingArray)
		{
			if(UInteractorComponent* Interactor = FindInteractorComponent(Actor, nullptr))
			{
				Interactor->BeginObserving(this);
			}
		}
	}*/
	
	/*if(UPrimitiveComponent* AttachPerent = Cast<UPrimitiveComponent>(GetAttachParent()))
	{
		AttachPerent->OnComponentBeginOverlap.AddDynamic(this, &UInteractionTargetComponent::OnComponentBeginOverlap);
		AttachPerent->OnComponentEndOverlap.AddDynamic(this, &UInteractionTargetComponent::OnComponentEndOverlap);

		/*
		TArray<AActor*> ActoesOverlapingArray;
		AttachPerent->GetOverlappingActors(ActoesOverlapingArray);

		for (AActor* Actor : ActoesOverlapingArray)
		{
			UInteractorComponent* Interactor = FindInteractorComponent(Actor);

			if (IsValid(Interactor))
				Interactor->BeginObserving(this);
		}
		#1#
	}*/
}

void UInteractionTargetComponent::SetInteractorActivityState(bool NewState)
{
	switch (NewState) // ?
	{
		case true :
		{
			IsInteractionTargetActive = true;

			if(TargetCollision != nullptr)
			{
				TArray<AActor*> ActoesOverlapingArray;
				TargetCollision->GetOverlappingActors(ActoesOverlapingArray, ACharacter::StaticClass());

				for (AActor* Actor : ActoesOverlapingArray)
				{
					UInteractorComponent* Interactor = FindInteractorComponent(Actor);

					if (IsValid(Interactor))
						Interactor->BeginObserving(this);
					//else
						//ensure(IsValid(Interactor));
				}
			}
			break;
		}
		case false :
		{
			IsInteractionTargetActive = false;

			if (TargetCollision != nullptr)
			{
				TArray<AActor*> ActoesOverlapingArray;
				TargetCollision->GetOverlappingActors(ActoesOverlapingArray, ACharacter::StaticClass());

				for (AActor* Actor : ActoesOverlapingArray)
				{
					UInteractorComponent* Interactor = FindInteractorComponent(Actor);

					if (IsValid(Interactor))
						Interactor->EndObserving(this);
					//else
						//ensure(IsValid(Interactor));
				}
			}
			break;
		}
	}

}

void UInteractionTargetComponent::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(IsInteractionTargetActive)
	{
		UInteractorComponent* InteractorComponent = FindInteractorComponent(OtherActor, OtherComp);

		if (IsValid(InteractorComponent))
			InteractorComponent->BeginObserving(this);
	}
}

void UInteractionTargetComponent::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (IsInteractionTargetActive)
	{
		UInteractorComponent* InteractorComponent = FindInteractorComponent(OtherActor, OtherComp);

		if (IsValid(InteractorComponent))
			InteractorComponent->EndObserving(this);
	}
}

void UInteractionTargetComponent::ReattachParentCollision(UPrimitiveComponent* NewParent)
{
	if(TargetCollision != nullptr)
	{
		TargetCollision->OnComponentBeginOverlap.RemoveDynamic(this, &UInteractionTargetComponent::OnComponentBeginOverlap);
		TargetCollision->OnComponentEndOverlap.RemoveDynamic(this, &UInteractionTargetComponent::OnComponentEndOverlap);

	}
	if (NewParent)
	{
		//AttachToComponent(NewParent, FAttachmentTransformRules::KeepRelativeTransform);

		NewParent->OnComponentBeginOverlap.AddDynamic(this, &UInteractionTargetComponent::OnComponentBeginOverlap);
		NewParent->OnComponentEndOverlap.AddDynamic(this, &UInteractionTargetComponent::OnComponentEndOverlap);

		TargetCollision = Cast<UShapeComponent>(NewParent);
	}
	//else TODO
		//ensure(IsValid(NewParent));
}


float UInteractionTargetComponent::WantFocus_Implementation(const UInteractorComponent* InteractorComponent) const
{
	return WontFocusClampValue;
}

UInteractorComponent* UInteractionTargetComponent::FindInteractorComponent(AActor* OtherActor,
	UPrimitiveComponent* OtherComponent) const
{
	if (OtherActor)
	{
		TArray<USceneComponent*> PawnChildrens;

		OtherActor->GetRootComponent()->GetChildrenComponents(true, PawnChildrens);

		for (USceneComponent* Child : PawnChildrens)
		{
			if (UInteractorComponent* InteractorComponent = Cast<UInteractorComponent>(Child))
			{
				return InteractorComponent;
			}
		}

		// Is we dont find InteractorComponent in Actor, maybe InteractorComponent in controller ?
		if(APawn* OwnerPawn = Cast<APawn>(OtherActor))
		{
			if (AController* Controller = OwnerPawn->GetController())
				return Cast<UInteractorComponent>(Controller->GetComponentByClass(TSubclassOf<UInteractorComponent>()));
		}
	}

	return nullptr;
}

bool UInteractionTargetComponent::IsCollisionValid()
{
	return IsValid(TargetCollision.Get());
}

void UInteractionTargetComponent::DestroyComponent(bool bPromoteChildren)
{

	if (UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(GetAttachParent()))
	{
		PrimitiveComponent->OnComponentBeginOverlap.RemoveDynamic(this, &UInteractionTargetComponent::OnComponentBeginOverlap);
		PrimitiveComponent->OnComponentEndOverlap.RemoveDynamic(this, &UInteractionTargetComponent::OnComponentEndOverlap);
	}

	if (UPrimitiveComponent* AttachPerent = Cast<UPrimitiveComponent>(GetAttachParent()))
	{
		TArray<AActor*> ActoesOverlapingArray;
		AttachPerent->GetOverlappingActors(ActoesOverlapingArray, ACharacter::StaticClass());

		for (AActor* Actor : ActoesOverlapingArray)
		{
			UInteractorComponent* Interactor = FindInteractorComponent(Actor);

			if (IsValid(Interactor))
				Interactor->EndObserving(this);
		}
	}

	OnInteract.Clear();
	OnReceiveFocus.Clear();
	OnLoseFocus.Clear();

	Super::DestroyComponent(bPromoteChildren);
}

