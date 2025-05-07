#pragma once
#include "CoreMinimal.h"
#include "EOblivionMovementType.generated.h"

UENUM(BlueprintType)
enum class EOblivionMovementType : uint8 {
    NONE,
    WALKING,
    RUNNING,
    SNEAKING = 4,
    SWIMMING = 8,
    JUMPING = 16,
    FLYING = 32,
    FALLING = 64,
    SLIDING = 128,
};

