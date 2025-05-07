#pragma once
#include "CoreMinimal.h"
#include "EVMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EVMoveDirection : uint8 {
    NONE,
    FORWARD,
    BACKWARD,
    LEFT = 4,
    RIGHT = 8,
    ALL = 15,
};

