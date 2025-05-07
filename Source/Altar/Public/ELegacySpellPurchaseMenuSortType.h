#pragma once
#include "CoreMinimal.h"
#include "ELegacySpellPurchaseMenuSortType.generated.h"

UENUM(BlueprintType)
enum class ELegacySpellPurchaseMenuSortType : uint8 {
    None,
    Name,
    SpellCost,
    GoldCost,
};

