#pragma once
#include "CoreMinimal.h"
#include "PixelComponent.generated.h"

UENUM()
enum class PixelComponent : uint32 {
    COMP_RED,
    COMP_GREEN,
    COMP_BLUE,
    COMP_ALPHA,
    COMP_COMPRESSED,
    COMP_OFFSET_U,
    COMP_OFFSET_V,
    COMP_OFFSET_W,
    COMP_OFFSET_Q,
    COMP_LUMA,
    COMP_HEIGHT,
    COMP_VECTOR_X,
    COMP_VECTOR_Y,
    COMP_VECTOR_Z,
    COMP_PADDING,
    COMP_INTENSITY,
    COMP_INDEX,
    COMP_DEPTH,
    COMP_STENCIL,
    COMP_EMPTY,
};

