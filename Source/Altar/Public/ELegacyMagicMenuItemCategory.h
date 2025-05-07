#pragma once
#include "CoreMinimal.h"
#include "ELegacyMagicMenuItemCategory.generated.h"

UENUM(BlueprintType)
enum class ELegacyMagicMenuItemCategory : uint8 {
    Greater = 1,
    Lesser,
    Spell = 4,
    Scroll = 8,
    Special = 16,
    Disease,
    Ability,
    Poison,
    Enchantment,
    Potion,
    Wortcraft,
    Leveled_Spell,
    None = 0,
};

