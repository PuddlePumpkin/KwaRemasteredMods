#pragma once
#include "CoreMinimal.h"
#include "PixelTiling.generated.h"

UENUM()
enum class PixelTiling : uint32 {
    TILE_NONE,
    TILE_XENON,
    TILE_WII,
    TILE_NV_SWIZZLED,
};

