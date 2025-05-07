#pragma once
#include "CoreMinimal.h"
#include "EComposedWeaponPart.generated.h"

UENUM(BlueprintType)
enum class EComposedWeaponPart : uint8 {
    COMPOSED_WEAPON_ALL,
    COMPOSED_WEAPON_CONTAINER,
    COMPOSED_WEAPON_NUDE,
};

