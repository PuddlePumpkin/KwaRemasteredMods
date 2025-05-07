#pragma once
#include "CoreMinimal.h"
#include "hkMotionType.generated.h"

UENUM()
enum class hkMotionType : int8 {
    MO_SYS_INVALID,
    MO_SYS_DYNAMIC,
    MO_SYS_SPHERE_INERTIA,
    MO_SYS_SPHERE_STABILIZED,
    MO_SYS_BOX_INERTIA,
    MO_SYS_BOX_STABILIZED,
    MO_SYS_KEYFRAMED,
    MO_SYS_FIXED,
    MO_SYS_THIN_BOX,
    MO_SYS_CHARACTER,
};

