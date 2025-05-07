#pragma once
#include "CoreMinimal.h"
#include "EVActorBehaviorState.generated.h"

UENUM(BlueprintType)
enum class EVActorBehaviorState : uint8 {
    WAITING,
    STARTED,
    ONGOING,
    INTERRUPTED,
    ENDED,
};

