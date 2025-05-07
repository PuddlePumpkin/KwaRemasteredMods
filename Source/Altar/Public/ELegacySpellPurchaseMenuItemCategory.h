#pragma once
#include "CoreMinimal.h"
#include "ELegacySpellPurchaseMenuItemCategory.generated.h"

UENUM(BlueprintType)
enum class ELegacySpellPurchaseMenuItemCategory : uint8 {
    None,
    Greater,
    Lesser,
    Spell,
    Scroll,
    Special,
};

