#pragma once
#include "CoreMinimal.h"
#include "EResistStat.generated.h"

UENUM(BlueprintType)
enum class EResistStat : uint8 {
    DO_NOT_USE,
    RESIST_FIRE = 61,
    RESIST_FROST,
    RESIST_DISEASE,
    RESIST_MAGIC,
    RESIST_POISON = 67,
    RESIST_SHOCK,
};

