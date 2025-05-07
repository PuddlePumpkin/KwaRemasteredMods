#pragma once
#include "CoreMinimal.h"
#include "AccumFlags.generated.h"

UENUM()
enum class AccumFlags : uint32 {
    ACCUM_X_TRANS = 1,
    ACCUM_Y_TRANS,
    ACCUM_Z_TRANS = 4,
    ACCUM_X_ROT = 8,
    ACCUM_Y_ROT = 16,
    ACCUM_Z_ROT = 32,
    ACCUM_X_FRONT = 64,
    ACCUM_Y_FRONT = 128,
    ACCUM_Z_FRONT = 256,
    ACCUM_NEG_FRONT = 512,
};

