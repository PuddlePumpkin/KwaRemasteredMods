#pragma once
#include "CoreMinimal.h"
#include "EOblivionWeaponType.generated.h"

UENUM(BlueprintType)
enum class EOblivionWeaponType : uint8 {
    NONE,
    BLADE_ONE_HAND,
    BLADE_TWO_HAND,
    BLUNT_ONE_HAND,
    BLUNT_TWO_HAND,
    STAFF,
    MARKSMAN_BOW,
};

