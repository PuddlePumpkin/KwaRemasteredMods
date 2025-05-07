#pragma once
#include "CoreMinimal.h"
#include "ELegacyInventoryMenuPage.generated.h"

UENUM(BlueprintType)
enum class ELegacyInventoryMenuPage : uint8 {
    Weapon,
    Armor,
    Alchemy,
    Misc,
    All,
};

