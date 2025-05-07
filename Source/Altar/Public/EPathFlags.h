#pragma once
#include "CoreMinimal.h"
#include "EPathFlags.generated.h"

UENUM()
enum class EPathFlags : uint16 {
    CVDataNeedsUpdate = 1,
    CurveTypeOpen,
    AllowFlip = 4,
    Bank = 8,
    ConstantVelocity = 16,
    Follow = 32,
    Flip = 64,
};

