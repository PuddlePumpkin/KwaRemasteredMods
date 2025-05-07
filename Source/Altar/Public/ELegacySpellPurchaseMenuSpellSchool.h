#pragma once
#include "CoreMinimal.h"
#include "ELegacySpellPurchaseMenuSpellSchool.generated.h"

UENUM(BlueprintType)
enum class ELegacySpellPurchaseMenuSpellSchool : uint8 {
    Alteration,
    Conjuration,
    Destruction,
    Illusion,
    Mysticism,
    Restoration,
};

