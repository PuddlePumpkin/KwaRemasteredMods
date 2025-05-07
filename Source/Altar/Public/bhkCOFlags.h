#pragma once
#include "CoreMinimal.h"
#include "bhkCOFlags.generated.h"

UENUM()
enum class bhkCOFlags : uint16 {
    ACTIVE = 1,
    RESET_TRANS,
    NOTIFY = 4,
    SET_LOCAL = 8,
    DBG_DISPLAY = 16,
    USE_VEL = 32,
    RESET = 64,
    SYNC_ON_UPDATE = 128,
    BLEND_POS = 256,
    ALWAYS_BLEND = 512,
    ANIM_TARGETED = 1024,
    DISMEMBERED_LIMB = 2048,
};

