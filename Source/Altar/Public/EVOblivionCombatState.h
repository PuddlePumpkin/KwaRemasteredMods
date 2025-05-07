#pragma once
#include "CoreMinimal.h"
#include "EVOblivionCombatState.generated.h"

UENUM(BlueprintType)
enum class EVOblivionCombatState : uint8 {
    ATTACK,
    BLOCK,
    HOLD,
    DONE,
};

