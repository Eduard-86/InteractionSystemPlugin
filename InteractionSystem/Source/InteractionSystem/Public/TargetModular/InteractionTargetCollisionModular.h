#pragma once

#include "TargetCollision/InteractionTargetCollision.h"

#include "InteractionTargetCollisionModular.generated.h"


class UInteractionTargetCollisionModular;

class UModuleFocusTarget;
class UModularSettings;

class UModularDisplaySettings;
class UModuleDisplayTarget;

class UInteractionFocusModularBase;



UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName = "Interaction Target Modular"), EditInlineNew)
class INTERACTIONSYSTEM_API UInteractionTargetCollisionModular : public UInteractionTargetCollision
{
    GENERATED_BODY()

public:

    virtual void BeginPlay() override;

protected:

    virtual float WantFocus_Implementation(const UInteractorComponent* InteractorComponent) const override;

    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category = "ModularTarget")
    TArray<TObjectPtr<UModuleFocusTarget>> FocusModulesArray;

    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category = "ModularTarget")
    TArray <TObjectPtr<UModuleDisplayTarget>> FunctionalModules;

protected:

    void ModulesInit();

#pragma region ModularSettings

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FocusMultiplier = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FocusBias = 0.f;

#if WITH_EDITOR
   //inline static TArray<TSubclassOf<UModuleFocusTarget>> FocusModules1;
   // inline static TArray<UModularSettings*> ModularBlackboard1;

   //inline static TArray<TSubclassOf<UModuleDisplayTarget>> DisplayModules1;
   //inline static TArray<UModularDisplaySettings*> ModularDisplayBlackboard1;
#endif

public:
    


    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Modular Target")
    TArray<UModuleFocusTarget*> GetFocusModules() { return TArray<UModuleFocusTarget*>(); } // TODO: functions

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Modular Target")
    TArray<UModuleDisplayTarget*> GetFunctionalModules() { return TArray<UModuleDisplayTarget*>(); }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Modular Target", meta=(DeterminesOutputType = "Class"))
    TArray<UModuleFocusTarget*> GetFocusModuleByClass(TSubclassOf<UModuleFocusTarget> Class) { return TArray<UModuleFocusTarget*>(); }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Modular Target", meta = (DeterminesOutputType = "Class"))
    TArray<UModuleDisplayTarget*> GetFunctionalModuleByClass(TSubclassOf<UModuleDisplayTarget> Class) { return TArray<UModuleDisplayTarget*>(); }


    UFUNCTION()
    void GetFocusModule(const UInteractorComponent* InteractorComponent);
    UFUNCTION()
	void LoseFocusModule(const UInteractorComponent* InteractorComponent);
    UFUNCTION()
	void GetNoticedModule(const UInteractorComponent* InteractorComponent);
    UFUNCTION()
	void GetLoseSightModule(const UInteractorComponent* InteractorComponent);

protected:
    virtual void DestroyComponent(bool bPromoteChildren) override;
#pragma endregion

};