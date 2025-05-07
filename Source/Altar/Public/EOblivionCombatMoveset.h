#pragma once
#include "CoreMinimal.h"
#include "EOblivionCombatMoveset.generated.h"

UENUM(BlueprintType)
enum class EOblivionCombatMoveset : uint8 {
    HAND_TO_HAND,
    DAGGER,
    ONE_HANDED_SWORD,
    TWO_HANDED_SWORD,
    ONE_HANDED_MACE,
    TWO_HANDED_MACE,
};

