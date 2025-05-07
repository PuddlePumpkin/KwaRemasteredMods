#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuPotionType.generated.h"

UENUM(BlueprintType)
enum class EOriginalInventoryMenuPotionType : uint8 {
    Potion,
    Poison,
    Beverage,
    None,
};

