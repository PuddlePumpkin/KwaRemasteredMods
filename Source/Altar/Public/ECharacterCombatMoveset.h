#pragma once
#include "CoreMinimal.h"
#include "ECharacterCombatMoveset.generated.h"

UENUM(BlueprintType)
enum class ECharacterCombatMoveset : uint8 {
    HAND_TO_HAND,
    ONE_HANDED,
    TWO_HANDED,
    STAFF,
    BOW,
};

