#include "TargetModular/InteractionTargetCollisionModular.h"

#include "TargetModular/Modules/ModuleFocusTarget.h"
#include "TargetModular/Modules/ModuleDisplayTarget.h"


void UInteractionTargetCollisionModular::BeginPlay()
{
	OnLoseFocus.AddDynamic(this, &UInteractionTargetCollisionModular::LoseFocusModule);
	OnReceiveFocus.AddDynamic(this, &UInteractionTargetCollisionModular::GetFocusModule);
	InteractorLoseSight.AddDynamic(this, &UInteractionTargetCollisionModular::GetLoseSightModule);
	InteractorNoticed.AddDynamic(this, &UInteractionTargetCollisionModular::GetNoticedModule);

	CreateModules();

	Super::BeginPlay();
}

float UInteractionTargetCollisionModular::WantFocus_Implementation(
	const UInteractorComponent* InteractorComponent) const
{

	for (TObjectPtr<UModuleDisplayTarget> Modul : FocusModulesDisplay)
	{
		Modul->DisplayTick(0 /*TODO: Provide DeltaTime*/);
	}

	TDoubleLinkedList<float> ListCached;
	ListCached.AddHead(0.f);

	for(TObjectPtr<UModuleFocusTarget> Modul : FocusModulesArray)
	{
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

#if WITH_EDITOR

void UInteractionTargetCollisionModular::PreEditChange(FEditPropertyChain& PropertyAboutToChange)
{
	UObject::PreEditChange(PropertyAboutToChange);
}

void UInteractionTargetCollisionModular::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
}

void UInteractionTargetCollisionModular::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{

	EObjectFlags temp = this->GetFlags();

	if(!HasAnyFlags(RF_ArchetypeObject))
	{
		if (GetOwner() != nullptr)
		{
			TArray<UObject*> OutDefaultSubobjects;

			AActor* Owner = GetOwner()->GetClass()->GetDefaultObject<AActor>();

			Owner->GetDefaultSubobjects(OutDefaultSubobjects);

			for (UObject* OutDefaultSubobject : OutDefaultSubobjects)
			{
				UInteractionTargetCollisionModular* DefaultTarget = Cast<UInteractionTargetCollisionModular>(OutDefaultSubobject);

				if (DefaultTarget != nullptr)
				{
					this->FocusModules = DefaultTarget->FocusModules;
					this->ModularBlackboard = DefaultTarget->ModularBlackboard;

					this->DisplayModules = DefaultTarget->DisplayModules;
					this->ModularDisplayBlackboard = DefaultTarget->ModularDisplayBlackboard;
				}
			}
		}

		Super::PostEditChangeChainProperty(PropertyChangedEvent);
		return;
	}

	if (PropertyChangedEvent.GetPropertyName() == "FocusModules")
	{
		switch (PropertyChangedEvent.ChangeType)
		{
			case EPropertyChangeType::ArrayAdd:
			{
				for (int i = 0; i < FocusModules.Num(); ++i)
				{
					if (FocusModules[i] == nullptr) ////
					{
						//if (Modules.Num() == ModularBlackboard.Num())
						//	continue;

						if (i < ModularBlackboard.Num())
						{	// there must be "add at index" function
							if (ModularBlackboard[i] != nullptr) {
								ModularBlackboard[i]->MarkAsGarbage();
							}
							ModularBlackboard[i] = nullptr;
						}
						else
							ModularBlackboard.Add(nullptr);
					}
				}

				break;
			}
			case EPropertyChangeType::ValueSet:
			{
				/*
				for (int i = 0; i < FocusModules.Num(); ++i) {
					if (FocusModules[i] == nullptr)
					{
						FocusModules.RemoveAt(i);

						if (i < ModularBlackboard.Num())
							ModularBlackboard.RemoveAt(i);
					}
				}

				for (int i = 0; i < FocusModules.Num(); ++i) {
					if (i < ModularBlackboard.Num()) {
						if (ModularBlackboard[i] == nullptr) {
							UModuleFocusTarget* tempActionTask = Cast<UModuleFocusTarget>(FocusModules[i]->GetDefaultObject());
							auto StructObject = NewObject<UModularSettings>(this, tempActionTask->SettingsClass, NAME_None, RF_NeedLoad);
							check(IsValid(StructObject));
							ModularBlackboard[i] = StructObject;
						}
					}
					else if (i >= ModularBlackboard.Num()) {
						UModuleFocusTarget* tempActionTask = Cast<UModuleFocusTarget>(FocusModules[i]->GetDefaultObject());
						auto StructObject = NewObject<UModularSettings>(this, tempActionTask->SettingsClass, NAME_None, RF_NeedLoad);
						check(IsValid(StructObject));
						ModularBlackboard.Add(StructObject);
						check(ModularBlackboard.Num() == FocusModules.Num());
					}
				}
				*/

				int ModuleElementIndex = PropertyChangedEvent.GetArrayIndex(PropertyChangedEvent.GetMemberPropertyName().ToString());

				if (ModuleElementIndex < 0)
				{
					while (!ModularBlackboard.IsEmpty()) {

						if (ModularBlackboard[0] != nullptr)
						{
							ModularBlackboard[0]->MarkAsGarbage();
						}
						ModularBlackboard.RemoveAt(0);
					}
					ModularBlackboard.Empty();

					break;
				}
					

				if (ModuleElementIndex >= ModularBlackboard.Num())
				{
					if (IsValid(FocusModules[ModuleElementIndex]))
					{
						UModuleFocusTarget* tempActionTask = Cast<UModuleFocusTarget>(FocusModules[ModuleElementIndex]->GetDefaultObject());
						auto StructObject = NewObject<UModularSettings>(this, tempActionTask->SettingsClass, NAME_None, RF_Public); //, RF_Public
						check(IsValid(StructObject));
						ModularBlackboard.Add(StructObject);
					}
				}
				else if (ModuleElementIndex < ModularBlackboard.Num())
				{
					if (IsValid(FocusModules[ModuleElementIndex]))
					{
						UModuleFocusTarget* tempActionTask = Cast<UModuleFocusTarget>(FocusModules[ModuleElementIndex]->GetDefaultObject());
						auto StructObject = NewObject<UModularSettings>(this, tempActionTask->SettingsClass, NAME_None, RF_Public); //, RF_Public
						check(IsValid(StructObject));
						ModularBlackboard[ModuleElementIndex] = StructObject;
					}
					else
					{
						if (IsValid(ModularBlackboard[ModuleElementIndex]))
						{
							ModularBlackboard[ModuleElementIndex]->MarkAsGarbage();
							ModularBlackboard[ModuleElementIndex] = nullptr;
						}
					}
				}

				break;
			}
			case EPropertyChangeType::ArrayRemove:
			{
				int RemoveModuleElementIndex = PropertyChangedEvent.GetArrayIndex(
					PropertyChangedEvent.GetMemberPropertyName().ToString());

				if (RemoveModuleElementIndex < ModularBlackboard.Num())
				{
					if (ModularBlackboard[RemoveModuleElementIndex] != nullptr)
						ModularBlackboard[RemoveModuleElementIndex]->MarkAsGarbage();

					ModularBlackboard.RemoveAt(RemoveModuleElementIndex);
				}

				break;
			}
			case EPropertyChangeType::ArrayClear:
			{
				while (!ModularBlackboard.IsEmpty()) {
					
					if (ModularBlackboard[0] != nullptr)
					{
						ModularBlackboard[0]->MarkAsGarbage();
					}
					ModularBlackboard.RemoveAt(0);
				}
				ModularBlackboard.Empty();

				break;
			}
			default:
				break;
			}

	}

	if (PropertyChangedEvent.GetPropertyName() == "ModularBlackboard") {

		if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove) {

			int RemoveSettingElementIndex = PropertyChangedEvent.GetArrayIndex(
				PropertyChangedEvent.GetMemberPropertyName().ToString());

			if (RemoveSettingElementIndex < FocusModules.Num())
			{
				FocusModules.RemoveAt(RemoveSettingElementIndex);
			}

		}
	}

	if (PropertyChangedEvent.GetPropertyName() == "DisplayModules")
	{
		switch (PropertyChangedEvent.ChangeType)
		{
			case EPropertyChangeType::ArrayAdd :
			{
				for (int i = 0; i < DisplayModules.Num(); ++i)
				{
					if (DisplayModules[i] == nullptr) ////
					{
						if (i < ModularDisplayBlackboard.Num())
						{	// there must be "add at index" function
							if (ModularDisplayBlackboard[i] != nullptr) {
								ModularDisplayBlackboard[i]->MarkAsGarbage();
							}
							ModularDisplayBlackboard[i] = nullptr;
						}
						else
							ModularDisplayBlackboard.Add(nullptr);
					}
				}

				break;
			}
			case EPropertyChangeType::ValueSet :
			{
				int ModuleElementIndex = PropertyChangedEvent.GetArrayIndex(PropertyChangedEvent.GetMemberPropertyName().ToString());

				if (ModuleElementIndex < 0)
				{
					while (!ModularDisplayBlackboard.IsEmpty()) {

						if (ModularDisplayBlackboard[0] != nullptr)
						{
							ModularDisplayBlackboard[0]->MarkAsGarbage();
						}
						ModularDisplayBlackboard.RemoveAt(0);
					}
					ModularDisplayBlackboard.Empty();

					break;
				}

				if (IsValid(DisplayModules[ModuleElementIndex]))
				{
					UModuleDisplayTarget* tempActionTask = Cast<UModuleDisplayTarget>(DisplayModules[ModuleElementIndex]->GetDefaultObject());
					auto StructObject = NewObject<UModularDisplaySettings>(this, tempActionTask->SettingsClass, NAME_None, RF_Public);
					check(IsValid(StructObject));

					if (ModuleElementIndex >= ModularDisplayBlackboard.Num())
						ModularDisplayBlackboard.Add(StructObject);
					else if (ModuleElementIndex < ModularDisplayBlackboard.Num())
						ModularDisplayBlackboard[ModuleElementIndex] = StructObject;
				}
				else
				{
					if (IsValid(ModularDisplayBlackboard[ModuleElementIndex]))
					{
						ModularDisplayBlackboard[ModuleElementIndex]->MarkAsGarbage();
						ModularDisplayBlackboard[ModuleElementIndex] = nullptr;
					}
				}

				/*
				if (ModuleElementIndex >= ModularDisplayBlackboard.Num())
				{
					if (IsValid(DisplayModules[ModuleElementIndex]))
					{
						UModuleDisplayTarget* tempActionTask = Cast<UModuleDisplayTarget>(DisplayModules[ModuleElementIndex]->GetDefaultObject());
						auto StructObject = NewObject<UModularDisplaySettings>(this, tempActionTask->SettingsClass, NAME_None, RF_Public);
						check(IsValid(StructObject));
						ModularDisplayBlackboard.Add(StructObject);
					}
				}
				else if (ModuleElementIndex < ModularDisplayBlackboard.Num())
				{
					if (IsValid(DisplayModules[ModuleElementIndex]))
					{
						UModuleDisplayTarget* tempActionTask = Cast<UModuleDisplayTarget>(DisplayModules[ModuleElementIndex]->GetDefaultObject());
						auto StructObject = NewObject<UModularDisplaySettings>(this, tempActionTask->SettingsClass, NAME_None, RF_Public);
						check(IsValid(StructObject));
						ModularDisplayBlackboard[ModuleElementIndex] = StructObject;
					}
					else
					{
						if (IsValid(ModularDisplayBlackboard[ModuleElementIndex]))
						{
							ModularDisplayBlackboard[ModuleElementIndex]->MarkAsGarbage();
							ModularDisplayBlackboard[ModuleElementIndex] = nullptr;
						}
					}
				}*/

				break;
			}
			case EPropertyChangeType::ArrayRemove :
			{
				int RemoveModuleElementIndex = PropertyChangedEvent.GetArrayIndex(
					PropertyChangedEvent.GetMemberPropertyName().ToString());

				if (RemoveModuleElementIndex < ModularDisplayBlackboard.Num())
				{
					if (ModularDisplayBlackboard[RemoveModuleElementIndex] != nullptr)
						ModularDisplayBlackboard[RemoveModuleElementIndex]->MarkAsGarbage();

					ModularDisplayBlackboard.RemoveAt(RemoveModuleElementIndex);
				}

				break;
			}
			case EPropertyChangeType::ArrayClear :
			{
				while (!ModularDisplayBlackboard.IsEmpty()) {
					
					if (ModularDisplayBlackboard[0] != nullptr)
					{
						ModularDisplayBlackboard[0]->MarkAsGarbage();
					}
					ModularDisplayBlackboard.RemoveAt(0);
				}
				ModularDisplayBlackboard.Empty();

				break;
			}
			default:
				break;
		}

	}

	if(PropertyChangedEvent.GetPropertyName() == "ModularDisplayBlackboard")
	{
		if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove) {

			int RemoveSettingElementIndex = PropertyChangedEvent.GetArrayIndex(
				PropertyChangedEvent.GetMemberPropertyName().ToString());

			if (RemoveSettingElementIndex < DisplayModules.Num())
			{
				DisplayModules.RemoveAt(RemoveSettingElementIndex);
			}

		}
	}

	//TODO
	//UInteractionTargetCollisionModular* CDO = GetClass()->GetDefaultObject<ThisClass>();
	//
	//CDO->FocusModules = this->FocusModules;
	//CDO->ModularBlackboard = this->ModularBlackboard;

	
	//FocusModules1 = this->FocusModules;
	//ModularBlackboard1 = this->ModularBlackboard;

	//DisplayModules1 = this->DisplayModules;
	//ModularDisplayBlackboard1 = this->ModularDisplayBlackboard;

	

	//for(TSubclassOf<UModuleFocusTarget> val : FocusModules)
	//	FocusModules1.Add(val);

	//ModularBlackboard1 = this->ModularBlackboard;

	//DisplayModules1 = this->DisplayModules;
	//ModularDisplayBlackboard1 = this->ModularDisplayBlackboard;


	Super::PostEditChangeChainProperty(PropertyChangedEvent);

}
#endif

void UInteractionTargetCollisionModular::CreateModules()
{
	//ensure()

	//TODO 
	//UInteractionTargetCollisionModular* CDO = GetClass()->GetDefaultObject<ThisClass>();
	//CDO->FocusModules;

	if (FocusModules.Num() == ModularBlackboard.Num())
	{
		for (int ModulClassInd = 0; ModulClassInd < FocusModules.Num(); ++ModulClassInd)
		{
			if (IsValid(FocusModules[ModulClassInd]))
			{
				UModuleFocusTarget* NewModule = NewObject<UModuleFocusTarget>(this, FocusModules[ModulClassInd].Get());
				NewModule->ExecuteActionEvent(ModularBlackboard[ModulClassInd], this);
				NewModule->ModuleLogicWorkType = ModularBlackboard[ModulClassInd]->LogicWorkType;

				FocusModulesArray.Add(NewModule);
			}
			else
				continue;
		}
	}
	else
		ensure(FocusModules.Num() != ModularBlackboard.Num());

	if (DisplayModules.Num() == ModularDisplayBlackboard.Num())
	{
		for (int ModulClassInd = 0; ModulClassInd < DisplayModules.Num(); ++ModulClassInd)
		{
			if (IsValid(DisplayModules[ModulClassInd]))
			{
				UModuleDisplayTarget* NewModule = NewObject<UModuleDisplayTarget>(this, DisplayModules[ModulClassInd].Get());
				NewModule->ExecuteActionEvent(ModularDisplayBlackboard[ModulClassInd], this);

				FocusModulesDisplay.Add(NewModule);
			}
			else
				continue;
		}
	}
	else
		ensure(DisplayModules.Num() != FocusModulesDisplay.Num());
}


void UInteractionTargetCollisionModular::GetFocusModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FocusModulesDisplay) {
		DisplayTargetObj->FocusGet(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::LoseFocusModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FocusModulesDisplay) {
		DisplayTargetObj->FocusLose(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::GetNoticedModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FocusModulesDisplay) {
		DisplayTargetObj->OwnInteractorBeginOvelrap(this, InteractorComponent);
	}
}

void UInteractionTargetCollisionModular::GetLoseSightModule(const UInteractorComponent* InteractorComponent)
{
	for (UModuleDisplayTarget* DisplayTargetObj : FocusModulesDisplay) {
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
