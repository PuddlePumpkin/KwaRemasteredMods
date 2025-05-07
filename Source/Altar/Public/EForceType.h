#pragma once
#include "CoreMinimal.h"
#include "EForceType.generated.h"

UENUM()
enum class EForceType : uint32 {
    FORCE_PLANAR,
    FORCE_SPHERICAL,
    FORCE_UNKNOWN,
};

