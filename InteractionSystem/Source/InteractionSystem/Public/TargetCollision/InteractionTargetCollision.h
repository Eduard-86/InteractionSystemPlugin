#pragma once

#include <InteractionTargetComponent.h>

#include "InteractionTargetCollision.generated.h"

UENUM(BlueprintType)
enum class ECollisionInteractionType : uint8 {
    /*
    VE_SimpleAnalis			  UMETA(DisplayName = "SimpleAnalis"),
    CollisionUsageMode
    */
    CreateSphere,
    UseChild,
    UseParent,
    ManualAttachment,
};

class USphereComponent;

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName = "Interaction Target With Collision"), EditInlineNew)
class INTERACTIONSYSTEM_API UInteractionTargetCollision : public UInteractionTargetComponent // TODO: Merge with parent
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

    UInteractionTargetCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

#pragma region CollisionSettings

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CollisionTarget", meta = (ExposeOnSpawn = true))
    ECollisionInteractionType CollisionUsageMode;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CollisionTarget", meta = (ExposeOnSpawn = true, EditCondition = "CollisionUsageMode==ECollisionInteractionType::CreateSphere", EditConditionHides))
    float SphereRadius = 200.f;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CollisionTarget", meta = (ExposeOnSpawn = true, EditCondition = "CollisionUsageMode==ECollisionInteractionType::CreateSphere", EditConditionHides))
    FColor CollisionColor = FColor::Blue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CollisionTarget", meta = (ExposeOnSpawn = true, EditCondition = "CollisionUsageMode==ECollisionInteractionType::CreateSphere", EditConditionHides))
    bool IsHiddenCollision = false;

#pragma endregion 

    /**
     *Component for attach sphere collision, if component will be nullptr,
     *component will attach on root component own actor.
     */
    //UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
    //TObjectPtr<USceneComponent> AttachComponent;

    UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UShapeComponent> CollisionComponent = nullptr;
    
protected:

    virtual void DestroyComponent(bool bPromoteChildren) override;

    /** Name of the CapsuleComponent. */
    static FName CapsuleComponentName;

};

