#pragma once
#include "CoreMinimal.h"
#include "ESkillStat.generated.h"

UENUM(BlueprintType)
enum class ESkillStat : uint8 {
    DO_NOT_USE,
    ARMORER = 12,
    ATHLETICS,
    BLADE,
    BLOCK,
    BLUNT,
    HANDTOHAND,
    HEAVYARMOR,
    ALCHEMY,
    ALTERATION,
    CONJURATION,
    DESTRUCTION,
    ILLUSION,
    MYSTICISM,
    RESTORATION,
    ACROBATICS,
    LIGHTARMOR,
    MARKSMAN,
    MERCANTILE,
    SECURITY,
    SNEAK,
    SPEECHCRAFT,
};

