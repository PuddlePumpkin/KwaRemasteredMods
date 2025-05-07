#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttackMove.generated.h"

UENUM(BlueprintType)
enum class ECharacterAttackMove : uint8 {
    LEFT,
    RIGHT,
    NORMAL_POWER,
    FORWARD_POWER,
    BACKWARD_POWER,
    LEFT_POWER,
    RIGHT_POWER,
};

