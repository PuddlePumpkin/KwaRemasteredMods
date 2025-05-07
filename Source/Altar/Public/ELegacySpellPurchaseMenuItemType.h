#pragma once
#include "CoreMinimal.h"
#include "ELegacySpellPurchaseMenuItemType.generated.h"

UENUM(BlueprintType)
enum class ELegacySpellPurchaseMenuItemType : uint8 {
    None,
    Target,
    Touch,
    Self = 4,
    Active = 8,
};

