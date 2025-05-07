#pragma once
#include "CoreMinimal.h"
#include "BroadPhaseType.generated.h"

UENUM()
enum class BroadPhaseType : int8 {
    BROAD_PHASE_INVALID,
    BROAD_PHASE_ENTITY,
    BROAD_PHASE_PHANTOM,
    BROAD_PHASE_BORDER,
};

