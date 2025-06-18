// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "InteractionTargetCollisionModular.h"
#include "InteractorComponent.h"
#include "UObject/NoExportTypes.h"
#include "InteractionSystem/Public/TargetModular/InteractionTargetCollisionModular.h"

#include "ModuleBaseTarget.generated.h"

UCLASS(Blueprintable, Abstract) // , DefaultToInstanced , editinlinenew
class UModularSettingsBase : public UObject
{
	GENERATED_BODY()

public:
	
};

UCLASS(Blueprintable, Abstract)
class INTERACTIONSYSTEM_API UModuleBaseTarget : public UObject
{
	GENERATED_BODY()

public:
	

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Enabled"))
		void SetEnableFocus(bool EnableState)
	{
		Enable = EnableState;
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Is Enabled"))
		bool GetEnableFocus()
	{
		return Enable;
	}

protected:

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	bool Enable = false;

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Initialize"))
	void ExecuteActionEvent(UModularSettingsBase* SettingsBlackboard, UPARAM(DisplayName = "Owner") UInteractionTargetCollisionModular* OwnerInteraction);

	virtual	void ExecuteActionEvent_Implementation(UModularSettingsBase* SettingsBlackboard, UPARAM(DisplayName = "Owner") UInteractionTargetCollisionModular* OwnerInteraction) { return; };

};
