#include "InteractorComponent.h"

#include "InteractionTargetComponent.h"
//#include "D:\UE\UE_5.4\Engine\Source\Runtime\Engine\Classes\Components\ShapeComponent.h"
//#include "GameFramework/Character.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

UInteractorComponent::UInteractorComponent() : Super()
{
	this->PrimaryComponentTick.bCanEverTick = true;

	IsInteractorActive = true;
}

void UInteractorComponent::BeginPlay()
{
    Super::BeginPlay();
	this->Activate(true);

	this->SetComponentTickEnabled(false);

	AActor* OwnActor = GetOwner();

	check(OwnActor);

	// Possession logic
	if (APawn* OwnPawn = Cast<APawn>(OwnActor))
	{
		UpdateControllerBindings(OwnPawn->GetController(), true);
		OwnPawn->ReceiveControllerChangedDelegate.AddUniqueDynamic(this, &UInteractorComponent::PossessedReaction);
	}

	FindObservTargets();
	
}

void UInteractorComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TArray<float> Desires;
	
	if(!Pocket.IsEmpty())
	{
		// ѕока пускай вал€етс€ тут
		for (int i = 0; i < Pocket.Num(); ++i)
		{
			// ƒанин костыль, если есть значит нужен
			if (!IsValid(Pocket[i]))
			{
				Pocket.Remove(Pocket[i]);

				if (Pocket.IsEmpty())
					return;
			}
		}

		Desires.Reserve(Pocket.Num());

		for(int i = 0; i < Pocket.Num(); ++i)
		{
			//Desires[i] = Pocket[i]->WantFocus(this)

			Desires.Add(Pocket[i]->WantFocus(this));
		}

		int Greateindex = 0;
		for (int i = 1; i < Desires.Num(); ++i)
		{
			if (Desires[Greateindex] < Desires[i])
				Greateindex = i;
		}

		if (Desires[Greateindex] <= 0.f)
		{
			if (Focus != nullptr)
			{
				if (Focus->WantFocus(this) <= 0.f)
				{
					Focus->OnLoseFocus.Broadcast(this);
					Pocket.AddUnique(Focus);
					Focus = nullptr;
					PressingTarget = nullptr;
				}
				else
					return;
			}
			else
			{
				return;
			}
		}
		else
		{
			if (Focus != nullptr)
			{
				if (Focus->WantFocus(this) >= Desires[Greateindex])
					return;
				else
				{
					Focus->OnLoseFocus.Broadcast(this);
					Pocket.AddUnique(Focus);
					PressingTarget = nullptr;

					Focus = Pocket[Greateindex];
					Pocket.Remove(Focus);
					Focus->OnReceiveFocus.Broadcast(this);

					if (Focus->StartInteractType == EStartInteractType::GetFocus)
					{
						OnInteractionStarted.Broadcast(Focus);
						Focus->OnInteract.Broadcast(this);
					}
				}
			}
			else
			{
				Focus = Pocket[Greateindex];
				Pocket.Remove(Focus);
				Focus->OnReceiveFocus.Broadcast(this);

				if(Focus != nullptr)
					if (Focus->StartInteractType == EStartInteractType::GetFocus)
					{
						OnInteractionStarted.Broadcast(Focus);
						Focus->OnInteract.Broadcast(this);
					}
			}
		}
	}
	else if(Focus != nullptr) ////////////////////////////////////////
	{
		if(Focus->WantFocus(this) <= 0.f)
		{
			Focus->OnLoseFocus.Broadcast(this);
			Pocket.AddUnique(Focus);

			Focus = nullptr;
			PressingTarget = nullptr;
		}
	}

}

void UInteractorComponent::PossessedReaction(APawn* Pawn, AController* OldController, AController* NewController)
{
	// seems like we could never get situation when OldController is valid and not equal to NewController
	if (IsValid(NewController))
		UpdateControllerBindings(NewController, true);
	else if (IsValid(OldController))
		UpdateControllerBindings(OldController, false);

}

void UInteractorComponent::UpdateControllerBindings(AController* NewController, bool IsBind)
{
	if(IsBind)
	{
		if (APlayerController* NewPlayerController = Cast<APlayerController>(NewController))
		{
			if (InteractAction != nullptr)
			{
				if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(NewController->InputComponent.Get()))
				{
					InteractActionBind = &EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &UInteractorComponent::Interact);
					ReleasedInteractActionBind = &EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &UInteractorComponent::ReleasedInteract);
				}
			}
			else
			{
				if (NewPlayerController->InputComponent)
				{
					InteractActionBindForOld = &NewPlayerController->InputComponent->BindAction(InputActionName,
						EInputEvent::IE_Pressed,
						this,
						&UInteractorComponent::Interact);

					ReleasedInteractActionBindForOld = &NewPlayerController->InputComponent->BindAction(InputActionName,
						EInputEvent::IE_Released,
						this,
						&UInteractorComponent::ReleasedInteract);
				}
			}
		}
	}
	else
	{

		if (InteractAction != nullptr)
		{
			if (APlayerController* NewPlayerController = Cast<APlayerController>(NewController))
			{
				if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(NewController->InputComponent.Get()))
				{
					EnhancedInputComponent->RemoveBinding(*InteractActionBind);
					EnhancedInputComponent->RemoveBinding(*ReleasedInteractActionBind);
				}
				else
				{
					if (NewPlayerController->InputComponent)
					{
						NewPlayerController->InputComponent->RemoveActionBindingForHandle(InteractActionBindForOld->GetHandle());
						NewPlayerController->InputComponent->RemoveActionBindingForHandle(ReleasedInteractActionBindForOld->GetHandle());
					}
				}
			}
		}
	}
		
}

void UInteractorComponent::Interact()
{
	if (Focus != nullptr)
	{
		if (Focus->StartInteractType == EStartInteractType::KeyInput)
		{
			UInteractionTargetComponent* TempFocusPtr = Focus;

			switch (Focus->KeyType)
			{
				case EKeyInteractionType::OneClick:
				{
					OnInteractionStarted.Broadcast(TempFocusPtr);

					TempFocusPtr->OnInteract.Broadcast(this);
					break;
				}

				case EKeyInteractionType::NeedPress:
				{
					PressingTarget = TempFocusPtr;

					PressingTarget->OnPressedInteractionKey.Broadcast(this);
					break;
				}
			}
		}
	}
}

void UInteractorComponent::ReleasedInteract()
{
	if(PressingTarget != nullptr)
	{
		PressingTarget->OnReleasedInteractionKey.Broadcast(this);
		OnInteractionEnded.Broadcast(PressingTarget);
		PressingTarget = nullptr;
	}
}

void UInteractorComponent::BeginObserving(UInteractionTargetComponent* Target)
{
	if(IsInteractorActive)
	{
		if (AcceptNewInteractable(Target) && !IsHasTarget(Target))
		{
			OnInteractionTargetBeginOverlap.Broadcast(Target);
			Target->InteractorNoticed.Broadcast(this);

			if (Target->StartInteractType == EStartInteractType::BeginObserving)
			{
				Focus = Target;
				Focus->OnReceiveFocus.Broadcast(this);

				OnInteractionStarted.Broadcast(Focus);
				Focus->OnInteract.Broadcast(this);
			}
			else
			{
				Pocket.AddUnique(Target);
			}

			if (!IsComponentTickEnabled() && IsInteractorActive)
				this->SetComponentTickEnabled(true);
		}
	}
}

void UInteractorComponent::EndObserving(UInteractionTargetComponent* Target)
{
	if(Pocket.Find(Target) != (-1) || Focus == Target)
	{
		if (Target == Focus)
		{
			Target->OnLoseFocus.Broadcast(this);
			Focus = nullptr;
			PressingTarget = nullptr;
		}
		else
		{
			Pocket.Remove(Target);
		}

		OnInteractionTargetEndOverlap.Broadcast(Target);
		Target->InteractorLoseSight.Broadcast(this);

		if (IsComponentTickEnabled())
			if (Pocket.IsEmpty() && Focus == nullptr)
				this->SetComponentTickEnabled(false);
			
	}
	//else
		//checkf(false, TEXT("Target can leave on the pocket but ones dont be in"))
	
}

bool UInteractorComponent::LockFocusTarget()
{
	if (Focus)
	{
		SetPauseInteractionState(false);
		Focus->SetOverlapingState(false);

		return true;
	}
	else
		return false;
}
bool UInteractorComponent::UnlockFocusTarget()
{
	if (Focus)
	{
		SetPauseInteractionState(true);
		Focus->SetOverlapingState(true);

		return true;
	}
	else
		return false;
}

UInteractionTargetComponent* UInteractorComponent::GetFocusTarget()
{
	return Focus;
}

bool UInteractorComponent::AcceptNewInteractable_Implementation(UInteractionTargetComponent* Target)
{
	return true;
}

void UInteractorComponent::SetInteractorComponentState(bool NewState)
{
	if (NewState == true)
	{
		IsInteractorActive = true;

		FindObservTargets();
	}
	else
	{
		IsInteractorActive = false;

		// null focus
		if(Focus != nullptr)
		{
			Focus->OnLoseFocus.Broadcast(this);
			Pocket.AddUnique(Focus);
			Focus = nullptr;
		}

		// null pocket
		while(Pocket.Num())
		{
			EndObserving(Pocket[0]);
		}
		
	}
}

void UInteractorComponent::SetPauseInteractionState(bool NewState)
{
	this->SetComponentTickEnabled(NewState);
}

bool UInteractorComponent::IsHasTarget(UInteractionTargetComponent* Target)
{
	if (Pocket.Find(Target) != INDEX_NONE)
		return true;
	else if (Focus == Target)
		return true;
	else
		return false;
}

void UInteractorComponent::DestroyComponent(bool bPromoteChildren)
{
	this->SetComponentTickEnabled(false);

	if(IsValid(Focus))
	{
		Focus->OnLoseFocus.Broadcast(this);
		Pocket.AddUnique(Focus);
		Focus = nullptr;
		PressingTarget = nullptr;
	}
	
	Super::DestroyComponent(bPromoteChildren);
}

void UInteractorComponent::FindObservTargets()
{
	AActor* OwnActor = GetOwner();

	check(OwnActor);

	// Find Interaction Target in beginplay
	TArray<AActor*> ActorsOverlapingArray;
	OwnActor->GetOverlappingActors(ActorsOverlapingArray);

	for (AActor* Actor : ActorsOverlapingArray)
	{
		TSet<UActorComponent*> ActorChildren;

		ActorChildren = Actor->GetComponents();

		int TargetCounter = 0;

		for (UActorComponent* Child : ActorChildren)
		{
			if (UInteractionTargetComponent* InteractorTarget
				= Cast<UInteractionTargetComponent>(Child))
			{
				//incomplete type - не полный тип, ругаетьс€ на не возможность обратитьс€ так как не
				// заинклюжен файл с классом
				//UShapeComponent* temp = InteractorTarget->TargetCollision.Get();
				//IsValid(temp);

				if (InteractorTarget->IsCollisionValid() && InteractorTarget->GetInteractiorActivityState())
				{
					++TargetCounter;
					BeginObserving(InteractorTarget);
				}
			}
		}
		checkf(TargetCounter <= 1, TEXT("More than one target found in actor!"));
	}
}