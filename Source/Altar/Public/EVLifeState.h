#pragma once
#include "CoreMinimal.h"
#include "EVLifeState.generated.h"

UENUM(BlueprintType)
enum class EVLifeState : uint8 {
    Alive_FromSpawn,
    Alive_FromResurrection,
    Alive_FromUnconscious,
    Dead_FromSpawn,
    Dead_FromKilled,
    Unconscious,
};

