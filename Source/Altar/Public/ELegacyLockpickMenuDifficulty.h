#pragma once
#include "CoreMinimal.h"
#include "ELegacyLockpickMenuDifficulty.generated.h"

UENUM(BlueprintType)
enum class ELegacyLockpickMenuDifficulty : uint8 {
    VeryEasy,
    Easy,
    Average,
    Hard,
    VeryHard,
    Impossible,
};

