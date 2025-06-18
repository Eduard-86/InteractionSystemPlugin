// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModuleBaseTarget.h"

#include "ModuleDisplayTarget.generated.h"

UCLASS(Blueprintable, Abstract, meta = (DisplayName = "Interaction Target Functional Module Settings")) // , DefaultToInstanced , editinlinenew
class UModularDisplaySettings : public UModularSettingsBase
{
	GENERATED_BODY()

public:
	//protected:


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default Settings", meta = (ExposeOnSpawn = true))
	float WidgetScale = 1.f;

};


UCLASS(Blueprintable, Abstract, meta = (DisplayName = "Interaction Target Functional Module"))
class INTERACTIONSYSTEM_API UModuleDisplayTarget: public UModuleBaseTarget
{
	GENERATED_BODY()

//public:

	friend UInteractionTargetCollisionModular;

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<UModularDisplaySettings> SettingsClass = UModularDisplaySettings::StaticClass();

protected:

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Init"))
	//void Init(UInteractionTargetCollisionModular* OwnerTarget);


	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "On Focus Received"))
	void FocusGet(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent);

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "On Focus Lost"))
	void FocusLose(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent);


	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "On Interactor Begin Overlap"))
	void OwnInteractorBeginOvelrap(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent);

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "On Interactor End Overlap"))
	void OwnInteractorEndOvelrap(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (DisplayName = "Event Tick"))
	void DisplayTick(float DeltaTime);

	void FocusGet_Implementation(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent) {};
	void FocusLose_Implementation(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent) {};
	void OwnInteractorBeginOvelrap_Implementation(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent) {};
	void OwnInteractorEndOvelrap_Implementation(UInteractionTargetCollisionModular* OwnerTarget, const UInteractorComponent* InteractorComponent) {};
	void DisplayTick_Implementation(float DeltaTime) {};
};
