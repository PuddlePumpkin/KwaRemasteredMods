#pragma once
#include "CoreMinimal.h"
#include "ApplyMode.generated.h"

UENUM()
enum class ApplyMode : uint32 {
    APPLY_REPLACE,
    APPLY_DECAL,
    APPLY_MODULATE,
    APPLY_HILIGHT,
    APPLY_HILIGHT2,
};

