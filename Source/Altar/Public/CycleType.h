#pragma once
#include "CoreMinimal.h"
#include "CycleType.generated.h"

UENUM()
enum class CycleType : uint32 {
    CYCLE_LOOP,
    CYCLE_REVERSE,
    CYCLE_CLAMP,
};

