#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuSortType.generated.h"

UENUM(BlueprintType)
enum class EOriginalInventoryMenuSortType : uint8 {
    Name,
    Price,
    Weight,
    WeaponDamage,
    ArmorRating,
    ItemHealth,
    ItemCharge,
    SpellCost,
    SpellPrice,
};

