#pragma once
#include "CoreMinimal.h"
#include "ESpellType.generated.h"

UENUM(BlueprintType)
enum class ESpellType : uint8 {
    Spell,
    Disease,
    Power,
    LesserPower,
    Ability,
    Poison,
    Enchantment,
    Potion,
    Wortcraft,
    LeveledSpell,
};

