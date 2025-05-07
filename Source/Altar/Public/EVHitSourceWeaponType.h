#pragma once
#include "CoreMinimal.h"
#include "EVHitSourceWeaponType.generated.h"

UENUM(BlueprintType)
enum class EVHitSourceWeaponType : uint8 {
    Slashing,
    Contending,
    Piercing,
    Other,
};

