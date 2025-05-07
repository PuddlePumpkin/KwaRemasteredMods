#pragma once
#include "CoreMinimal.h"
#include "EModernSpellType.generated.h"

UENUM(BlueprintType)
enum class EModernSpellType : uint8 {
    Spell,
    Disease,
    Power,
    Lesser_Power,
    Ability,
    Poison,
    Enchantment,
    Potion,
    Wortcraft,
    Leveled_Spell,
    None,
};

