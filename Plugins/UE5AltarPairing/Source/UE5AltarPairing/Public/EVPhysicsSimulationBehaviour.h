#pragma once
#include "CoreMinimal.h"
#include "EVPhysicsSimulationBehaviour.generated.h"

UENUM(BlueprintType)
enum class EVPhysicsSimulationBehaviour : uint8 {
    ALWAYS,
    NEVER,
    AT_DEATH_OR_FALL,
    START_ON_ACTIVATE,
    STOP_ON_ACTIVATE,
    WHEN_UNEQUIPPED,
};

