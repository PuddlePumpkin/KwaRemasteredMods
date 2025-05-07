#pragma once
#include "CoreMinimal.h"
#include "EAttackActionType.generated.h"

UENUM(BlueprintType)
enum class EAttackActionType : uint8 {
    NORMAL_ATTACK,
    POWER_ATTACK,
    ATTACK_ACTION_COUNT,
};

