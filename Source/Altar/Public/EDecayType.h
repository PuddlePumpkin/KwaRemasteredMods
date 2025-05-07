#pragma once
#include "CoreMinimal.h"
#include "EDecayType.generated.h"

UENUM()
enum class EDecayType : uint32 {
    DECAY_NONE,
    DECAY_LINEAR,
    DECAY_EXPONENTIAL,
};

