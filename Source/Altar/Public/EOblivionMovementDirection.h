#pragma once
#include "CoreMinimal.h"
#include "EOblivionMovementDirection.generated.h"

UENUM(BlueprintType)
enum class EOblivionMovementDirection : uint8 {
    NONE,
    DIRECTION_FORWARD,
    DIRECTION_BACKWARD,
    DIRECTION_LEFT = 4,
    DIRECTION_RIGHT = 8,
    TURN_LEFT = 16,
    TURN_RIGHT = 32,
};

