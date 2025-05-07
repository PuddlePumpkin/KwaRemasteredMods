#pragma once
#include "CoreMinimal.h"
#include "ELegacyMagicMenuSortType.generated.h"

UENUM(BlueprintType)
enum class ELegacyMagicMenuSortType : uint8 {
    Name,
    EffectValue,
    School,
    Magnitude,
    ItemCategory,
    Favorite,
    Cost,
};

