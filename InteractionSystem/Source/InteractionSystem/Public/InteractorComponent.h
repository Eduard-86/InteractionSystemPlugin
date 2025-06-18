#pragma once

#include <Components/SceneComponent.h>


#include "InteractorComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnInteractionTargetBeginOverlapSignature,
													UInteractorComponent,
													OnInteractionTargetBeginOverlap,
													const UInteractionTargetComponent*,
													InteractionTarget);

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnInteractionTargetEndOverlapSignature,
													UInteractorComponent,
													OnInteractionTargetEndOverlap,
													const UInteractionTargetComponent*,
													InteractionTarget);

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnInteractionStartedSignature,
													UInteractorComponent,
													OnInteractionStarted,
													const UInteractionTargetComponent*,
													InteractionTarget);

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnInteractionEndedSignature,
												    UInteractorComponent,
													OnInteractionEnded,
												    const UInteractionTargetComponent*,
												    InteractionTarget);

class UInteractionTargetComponent;
class UInputAction;

struct FInputBindingHandle;
struct FInputActionBinding;

struct FInputActionValue;


UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName = "Interactor Component"), EditInlineNew)
class INTERACTIONSYSTEM_API UInteractorComponent : public USceneComponent
{
    GENERATED_BODY()

public:

    UInteractorComponent();


	virtual void BeginPlay() override;

    void TickComponent(float                         DeltaTime,
        ELevelTick                    TickType,
        FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "Interactor Component", meta = (DisplayName = "Start Interaction"))
    void Interact();

    UFUNCTION(BlueprintCallable, Category = "Interactor Component", meta = (DisplayName = "End Interaction"))
    void ReleasedInteract();

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName InputActionName = "Interact";

    /** Is wont this InteractorCompinent interact whis this target */
    UFUNCTION(BlueprintNativeEvent)
    bool AcceptNewInteractable(UInteractionTargetComponent* Target);

    virtual bool AcceptNewInteractable_Implementation(UInteractionTargetComponent* Target);

    /** When you component deactivate, it keep calling OnNewInteractableAvailable and OnInteractableBecomeUnavailable delegate called */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Enabled"))
    void SetInteractorComponentState(bool NewState);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Is Enabled"))
    bool GetInteractiorComponentState() { return IsInteractorActive; };

    UFUNCTION(BlueprintCallable)
    void SetPauseInteractionState(bool NewState);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPauseInteractionState() { return IsComponentTickEnabled(); };

private:

    UFUNCTION()
    void PossessedReaction(APawn* Pawn, AController* OldController, AController* NewController);

    void UpdateControllerBindings(AController* NewController, bool IsBind); // delete

    FInputBindingHandle* InteractActionBind;
    FInputBindingHandle* ReleasedInteractActionBind;

    //for old logic
    FInputActionBinding* InteractActionBindForOld;
    FInputActionBinding* ReleasedInteractActionBindForOld;

public:
    /*
     Return true if Focus is was valid and one had lock 
     */
    UFUNCTION(BlueprintCallable)
    bool LockFocusTarget();

    /*
    Return true if Focus has valid and one has unlock
    */
    UFUNCTION(BlueprintCallable)
        bool UnlockFocusTarget();
   

    UFUNCTION(BlueprintCallable)
    UInteractionTargetComponent* GetFocusTarget();

    void BeginObserving(UInteractionTargetComponent* Target);

    void EndObserving(UInteractionTargetComponent* Target);

    //virtual void OnDeativation(UActorComponent* Component);

protected:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* InteractAction;

    bool IsInteractorActive;

    UInteractionTargetComponent* Focus = nullptr;

    UInteractionTargetComponent* PressingTarget = nullptr;
	
    TArray<UInteractionTargetComponent*> Pocket;

    bool IsHasTarget(UInteractionTargetComponent* Target);

public:
    UPROPERTY(BlueprintAssignable, Category = "Interaction")
    FOnInteractionTargetBeginOverlapSignature OnInteractionTargetBeginOverlap;

    UPROPERTY(BlueprintAssignable, Category = "Interaction")
    FOnInteractionTargetEndOverlapSignature OnInteractionTargetEndOverlap;

    UPROPERTY(BlueprintAssignable, Category = "Interaction")
    FOnInteractionStartedSignature OnInteractionStarted;

    UPROPERTY(BlueprintAssignable, Category = "Interaction")
    FOnInteractionEndedSignature OnInteractionEnded;

protected:
    virtual void DestroyComponent(bool bPromoteChildren) override;

    void FindObservTargets();
};