#pragma once
#include "CoreMinimal.h"
#include "ELeveledSpellFlags.generated.h"

UENUM()
enum class ELeveledSpellFlags : uint8 {
    CalculateAllBelowLevel = 1,
    CalculateForAllInCount,
    UseAllSpells = 4,
};

