#include "TargetCollision/InteractionTargetCollision.h"

#include "Components/SphereComponent.h"

FName UInteractionTargetCollision::CapsuleComponentName(TEXT("CollisionCylinder"));

UInteractionTargetCollision::UInteractionTargetCollision(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{}

void UInteractionTargetCollision::BeginPlay()
{
	TObjectPtr<UShapeComponent> UseCollision;

    switch (CollisionUsageMode)
    {
	    case ECollisionInteractionType::CreateSphere :	
		{
			AActor* OwnScullActor = GetOwner();

			USphereComponent* SphereCollision = Cast<USphereComponent>(OwnScullActor->AddComponentByClass(
				TSubclassOf<USphereComponent>(USphereComponent::StaticClass()),
				true, OwnScullActor->GetTransform(), true));

			SphereCollision->SetupAttachment(this);

			SphereCollision->InitSphereRadius(SphereRadius);

			//SphereCollision->RegisterComponent();
			OwnScullActor->FinishAddComponent(SphereCollision, true, FTransform());

			UseCollision = SphereCollision;

			break;
		}
		case ECollisionInteractionType::UseChild :
		{
			TArray<USceneComponent*> TargetChildrens;

			this->GetChildrenComponents(true, TargetChildrens);

			for (USceneComponent* Child : TargetChildrens)
			{
				if (UShapeComponent* Collision = Cast<UShapeComponent>(Child))
				{
					UseCollision = Collision;
					break;
				}
			}
			break;
		}
		case ECollisionInteractionType::UseParent :
		{
			if(UShapeComponent * ParentCollision = Cast<UShapeComponent>(GetAttachParent()))
			{
				UseCollision = ParentCollision;
				//ReattachParentCollision(Cast<UPrimitiveComponent>(GetAttachParent()));
			}

			break;
		}
		case ECollisionInteractionType::ManualAttachment :
		{
			break;
		}
		default:
	    {
			break;
	    }
    }

	if(UseCollision != nullptr)
	{
		CollisionComponent = UseCollision;

		CollisionComponent->SetCollisionProfileName("Interaction");

		CollisionComponent->ShapeColor = CollisionColor;
		CollisionComponent->SetHiddenInGame(IsHiddenCollision);

		ReattachParentCollision(CollisionComponent);
	}

	Super::BeginPlay();
}

void UInteractionTargetCollision::DestroyComponent(bool bPromoteChildren)
{
	if(IsValid(CollisionComponent))
		CollisionComponent->DestroyComponent(false);

	Super::DestroyComponent(bPromoteChildren);
}