#pragma once
#include "CoreMinimal.h"
#include "hkQualityType.generated.h"

UENUM()
enum class hkQualityType : int8 {
    MO_QUAL_INVALID,
    MO_QUAL_FIXED,
    MO_QUAL_KEYFRAMED,
    MO_QUAL_DEBRIS,
    MO_QUAL_MOVING,
    MO_QUAL_CRITICAL,
    MO_QUAL_BULLET,
    MO_QUAL_USER,
    MO_QUAL_CHARACTER,
    MO_QUAL_KEYFRAMED_REPORT,
};

