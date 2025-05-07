#pragma once
#include "CoreMinimal.h"
#include "EVOblivionStrategy.generated.h"

UENUM(BlueprintType)
enum class EVOblivionStrategy : uint8 {
    HANDTOHAND,
    MELEE_WEAPON,
    RANGED_WEAPON,
    MELEE_MAGIC,
    RANGED_MAGIC,
    YIELD,
    POST_YIELD,
    FLEE,
    BUFF,
    RESTORE,
    SWITCH,
    CALMED,
    SWIM_FLEE,
    NONE,
};

