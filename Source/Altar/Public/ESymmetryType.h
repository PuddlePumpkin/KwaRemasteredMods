#pragma once
#include "CoreMinimal.h"
#include "ESymmetryType.generated.h"

UENUM()
enum class ESymmetryType : uint32 {
    SPHERICAL_SYMMETRY,
    CYLINDRICAL_SYMMETRY,
    PLANAR_SYMMETRY,
};

