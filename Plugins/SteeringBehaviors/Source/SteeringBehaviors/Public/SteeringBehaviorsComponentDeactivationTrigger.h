#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBase.h"
#include "SteeringBehaviorsComponentDeactivationTrigger.generated.h"

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API ASteeringBehaviorsComponentDeactivationTrigger : public ATriggerBase {
    GENERATED_BODY()
public:
    ASteeringBehaviorsComponentDeactivationTrigger(const FObjectInitializer& ObjectInitializer);

};

