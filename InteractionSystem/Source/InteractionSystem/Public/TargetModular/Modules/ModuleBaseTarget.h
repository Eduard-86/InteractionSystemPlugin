// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "InteractionTargetCollisionModular.h"
#include "InteractorComponent.h"
#include "UObject/NoExportTypes.h"
#include "InteractionSystem/Public/TargetModular/InteractionTargetCollisionModular.h"

#include "ModuleBaseTarget.generated.h"

/*
UCLASS(Blueprintable, Abstract) // , DefaultToInstanced , editinlinenew
class UModularSettingsBase : public UObject
{
	GENERATED_BODY()

public:
	
};
*/

UCLASS(Blueprintable, Abstract, Within = InteractionTargetCollisionModular, EditInlineNew)
class INTERACTIONSYSTEM_API UModuleBaseTarget : public UObject
{
	GENERATED_BODY()

	friend UInteractionTargetCollisionModular;
		
public:


	//UModuleBaseTarget::UModuleBaseTarget()
	//	:OwnerInteractTarget(GetOuterUInteractionTargetCollisionModular())
	//{}

	//UModuleBaseTarget();

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

	UPROPERTY(BlueprintReadOnly)
	const UInteractionTargetCollisionModular*  OwnerInteractTarget;

protected:
	//BlueprintImplementableEvent
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Init"))
    void Init(const UInteractionTargetCollisionModular* OwnerTarget);

	virtual void Init_Implementation(const UInteractionTargetCollisionModular* OwnerTarget)
	{
		OwnerInteractTarget = GetOuterUInteractionTargetCollisionModular();
	};
};
