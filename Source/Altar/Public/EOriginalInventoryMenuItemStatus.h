#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuItemStatus.generated.h"

UENUM(BlueprintType)
enum class EOriginalInventoryMenuItemStatus : uint8 {
    Stolen = 1,
    Enchanted,
    Poisoned = 4,
    Broken = 8,
    Stolen_Enchanted = 3,
    Stolen_Poisoned = 5,
    Enchanted_Poisoned,
    Stolen_Enchanted_Poisoned,
    Stolen_Broken = 9,
    Enchanted_Broken,
    Stolen_Enchanted_Broken,
    Poisoned_Broken,
    Stolen_Poisoned_Broken,
    Enchanted_Poisoned_Broken,
    All,
    None = 0,
};

