#pragma once
#include "CoreMinimal.h"
#include "hkSolverDeactivation.generated.h"

UENUM()
enum class hkSolverDeactivation : int8 {
    SOLVER_DEACTIVATION_INVALID,
    SOLVER_DEACTIVATION_OFF,
    SOLVER_DEACTIVATION_LOW,
    SOLVER_DEACTIVATION_MEDIUM,
    SOLVER_DEACTIVATION_HIGH,
};

