#pragma once
#include "CoreMinimal.h"
#include "EVEnvironmentFormID.generated.h"

UENUM(BlueprintType)
enum class EVEnvironmentFormID : uint8 {
    // FIXME
    UNKNOWN = 0,
    ACTIVABLE = 18,
    APPARATUS,
    ARMOR,
    BOOK,
    CLOTHING,
    CONTAINER,
    DOOR,
    INGREDIENT,
    LIGHT,
    MISC,
    STATIC,
    FLORA = 31,
    FURNITURE,
    WEAPON,
    AMMUNITION,
    NPC,
    CREATURE,
    SOULGEM = 38,
    KEY,
    ALCHEMY,
    SIGILSTONE = 42,
};

