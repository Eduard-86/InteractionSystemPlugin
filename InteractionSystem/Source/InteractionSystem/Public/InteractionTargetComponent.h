#pragma once

#include <Components/SceneComponent.h>
//#include "InteractorComponent.h"

#include "InteractionTargetComponent.generated.h"


//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentOnReceiveFocusSignature,
//											const UInteractorComponent*,
//											InteractorComponent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionTargetEventSignature,
											const UInteractorComponent*,
											InteractorComponent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractSignature,
											UInteractorComponent*,
											InteractorComponent);

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentPressedSignature,
//											UInteractorComponent*,
//											InteractorComponent);
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentReleasedSignature,
//											UInteractorComponent*,
//											InteractorComponent);
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentOnLoseFocusSignature,
//											const UInteractorComponent*,
//											InteractorComponent);

UENUM(BlueprintType)
enum class EKeyInteractionType : uint8 {
	/*
	VE_SimpleAnalis			  UMETA(DisplayName = "SimpleAnalis"),
	*/
	OneClick,
	NeedPress,
};

UENUM(BlueprintType)
enum class EStartInteractType : uint8 {
	KeyInput,
	BeginObserving,
	GetFocus
};

class UShapeComponent;
class UInteractorComponent;

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName = "Interaction Target"), EditInlineNew)
class INTERACTIONSYSTEM_API UInteractionTargetComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	float WantFocus(const UInteractorComponent* InteractorComponent);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	EKeyInteractionType KeyType = EKeyInteractionType::OneClick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	EStartInteractType StartInteractType = EStartInteractType::KeyInput;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 1.f))
	float WontFocusClampValue = 1.0f;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Enabled"))
	void SetInteractorActivityState(bool NewState);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Is Enabled"))
	bool GetInteractiorActivityState() { return IsInteractionTargetActive; };

	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	void ReattachParentCollision(UPrimitiveComponent* NewParent);

	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget")
	FOnInteractSignature OnInteract; // merge with OnPressedInteractionKey

	// interactor focus target and lose focuse 
	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget", meta = (DisplayName = "On Focus Received"))
	FInteractionTargetEventSignature OnReceiveFocus;

	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget", meta = (DisplayName = "On Focus Lost"))
	FInteractionTargetEventSignature OnLoseFocus;

	// press key
	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget", meta = (DisplayName = "On Interaction Started"))
	FInteractionTargetEventSignature OnPressedInteractionKey;

	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget", meta = (DisplayName = "On Interaction Ended"))
	FInteractionTargetEventSignature OnReleasedInteractionKey;

	// Interactor sing target and loos sing 
	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget", meta = (DisplayName = "On Interactor Begin Overlap"))
	FInteractionTargetEventSignature InteractorNoticed;

	UPROPERTY(BlueprintAssignable, Category = "InteractionTarget", meta = (DisplayName = "On Interactor End Overlap"))
	FInteractionTargetEventSignature InteractorLoseSight;

	virtual void DestroyComponent(bool bPromoteChildren) override;

protected:
	bool IsInteractionTargetActive = true;

	virtual float WantFocus_Implementation(const UInteractorComponent* InteractorComponent) const;

	UInteractorComponent* FindInteractorComponent(AActor* OtherActor, UPrimitiveComponent* OtherComponent = nullptr) const;

	TObjectPtr<UShapeComponent> TargetCollision = nullptr;
public:

	bool IsCollisionValid();

	void SetOverlapingState(bool State)
	{
		IsInteractionTargetActive = State;
	}
};