#pragma once
#include "CoreMinimal.h"
#include "ConstraintPriority.generated.h"

UENUM()
enum class ConstraintPriority : uint32 {
    PRIORITY_INVALID,
    PRIORITY_PSI,
    PRIORITY_TOI = 3,
};

