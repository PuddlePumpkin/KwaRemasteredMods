#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuArmorClothPart.generated.h"

UENUM(BlueprintType)
enum class EOriginalInventoryMenuArmorClothPart : uint8 {
    Head,
    Upper = 2,
    Lower,
    Hand,
    Foot,
    Right_Ring,
    Left_Ring,
    Amulet,
    Shield = 13,
    Upper_And_Lower = 17,
    None,
};

