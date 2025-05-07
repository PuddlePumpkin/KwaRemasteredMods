#pragma once
#include "CoreMinimal.h"
#include "ECharacterCombatIdles.generated.h"

UENUM(BlueprintType)
enum class ECharacterCombatIdles : uint8 {
    HAND_TO_HAND,
    ONE_HANDED,
    TWO_HANDED,
    STAFF,
    BOW,
};

