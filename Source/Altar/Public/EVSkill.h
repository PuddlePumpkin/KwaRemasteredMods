#pragma once
#include "CoreMinimal.h"
#include "EVSkill.generated.h"

UENUM(BlueprintType)
enum class EVSkill : uint8 {
    DEFAULT,
    Armorer = 12,
    Athletics,
    Blade,
    Block,
    Blunt,
    Handtohand,
    Heavyarmor,
    Alchemy,
    Alteration,
    Conjuration,
    Destruction,
    Illusion,
    Mysticism,
    Restoration,
    Acrobatics,
    Lightarmor,
    Marksman,
    Mercantile,
    Security,
    Sneak,
    Speechcraft,
};

