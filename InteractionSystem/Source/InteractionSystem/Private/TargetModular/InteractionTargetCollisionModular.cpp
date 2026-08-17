#include "TargetModular/InteractionTargetCollisionModular.h"

#include "TargetModular/Modules/ModuleFocusTarget.h"
#include "TargetModular/Modules/ModuleDisplayTarget.h"


void UInteractionTargetCollisionModular::BeginPlay()
{
	OnLoseFocus.AddDynamic(this, &UInteractionTargetCollisionModular::LoseFocusModule);
	OnReceiveFocus.AddDynamic(this, &UInteractionTargetCollisionModular::GetFocusModule);
	InteractorLoseSight.AddDynamic(this, &UInteractionTargetCollisionModular::GetLoseSightModule);
	InteractorNoticed.AddDynamic(this, &UInteractionTargetCollisionModular::GetNoticedModule);

	ModulesInit(); 

	Super::BeginPlay();
}

float UInteractionTargetCollisionModular::WantFocus_Implementation(
	const UInteractorComponent* InteractorComponent) const
{

	for (TObjectPtr<UModuleDisplayTarget> Modul : FunctionalModules)
	{
		Modul->DisplayTick(0 /*TODO: Provide DeltaTime*/);
	}

	TDoubleLinkedList<float> ListCached;
	ListCached.AddHead(0.f);

	for(TObjectPtr<UModuleFocusTarget> Modul : FocusModulesArray)
	{
		if (!IsValid(Modul))
			break;

		if(Modul->GetEnableFocus())
		{
			float ModelFocus = Modul->GetFocus(InteractorComponent);

			if(Modul->ModuleLogicWorkType == ELogicFocusType::Logical)
			{
				if (ModelFocus == 0.f)
					return 0.f;
				else
					continue;
			}
			
			if (Modul->ModuleLogicWorkType == ELogicFocusType::HalfLogical)
			{
				if (ModelFocus == 0.f)
					return 0.f;
			}

			ModelFocus = FocusMultiplier * ModelFocus;
			ModelFocus = FocusBias + ModelFocus;

			if (ListCached.GetHead()->GetValue() < ModelFocus)
				ListCached.AddHead(ModelFocus);
			else
				ListCached.AddTail(ModelFocus);
		}
	}

	// todo add debug string later
	/*
	for (TDoubleLinkedList<float>::TDoubleLinkedListNode Modul : ListCached)
	{
		Modul.GetValue();
	}
	*/

	return ListCached.GetHead()->GetValue();
}

void UInteractionTargetCollisionModular::ModulesInit()
{
	for (TObjectPtr<UModuleBaseTarget> FocusModule: FocusModulesArray)
	{
		if (IsValid(FocusModule))
			FocusModule->Init(this);
	}
	for (TObjectPtr<UModuleBaseTarget> DisplayModule: FunctionalModules)
	{
		if (IsValid(DisplayModule))
			DisplayModule->Init(this);
	}
}


void UInteractionTargetCollisionModular::GetFocusModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FunctionalModules) {
		DisplayTargetObj->FocusGet(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::LoseFocusModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FunctionalModules) {
		DisplayTargetObj->FocusLose(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::GetNoticedModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FunctionalModules) {
		DisplayTargetObj->OwnInteractorBeginOvelrap(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::GetLoseSightModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FunctionalModules) {
		DisplayTargetObj->OwnInteractorEndOvelrap(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::DestroyComponent(bool bPromoteChildren)
{
	if(bPromoteChildren)
	{
		int g = 100;
	}
	Super::DestroyComponent(bPromoteChildren);
}
