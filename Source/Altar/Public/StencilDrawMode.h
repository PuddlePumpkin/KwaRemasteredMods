#pragma once
#include "CoreMinimal.h"
#include "StencilDrawMode.generated.h"

UENUM()
enum class StencilDrawMode : uint32 {
    DRAW_CCW_OR_BOTH,
    DRAW_CCW,
    DRAW_CW,
    DRAW_BOTH,
};

