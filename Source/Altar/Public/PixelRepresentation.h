#pragma once
#include "CoreMinimal.h"
#include "PixelRepresentation.generated.h"

UENUM()
enum class PixelRepresentation : uint32 {
    REP_NORM_INT,
    REP_HALF,
    REP_FLOAT,
    REP_INDEX,
    REP_COMPRESSED,
    REP_UNKNOWN,
    REP_INT,
};

