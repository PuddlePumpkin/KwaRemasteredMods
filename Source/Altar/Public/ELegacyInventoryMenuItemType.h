#pragma once
#include "CoreMinimal.h"
#include "ELegacyInventoryMenuItemType.generated.h"

UENUM(BlueprintType)
enum class ELegacyInventoryMenuItemType : uint8 {
    Weapons,
    Apparel,
    Apparatuses,
    Potions,
    Ingredients,
    Books,
    Keys,
    Stones,
    Misc,
    None,
};

