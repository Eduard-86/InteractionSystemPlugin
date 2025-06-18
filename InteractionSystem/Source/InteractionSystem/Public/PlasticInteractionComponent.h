#pragma once

#include <InteractionTargetComponent.h>

#include "PlasticInteractionComponent.generated.h"

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName = "PlasticInteractionTargetCpp"), EditInlineNew)
class INTERACTIONSYSTEM_API UPlasticInteractionComponent : public UInteractionTargetComponent
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

};