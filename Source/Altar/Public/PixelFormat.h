#pragma once
#include "CoreMinimal.h"
#include "PixelFormat.generated.h"

UENUM()
enum class PixelFormat : uint32 {
    FMT_RGB,
    FMT_RGBA,
    FMT_PAL,
    FMT_PALA,
    FMT_DXT1,
    FMT_DXT3,
    FMT_DXT5,
    FMT_RGB24NONINT,
    FMT_BUMP,
    FMT_BUMPLUMA,
    FMT_RENDERSPEC,
    FMT_1CH,
    FMT_2CH,
    FMT_3CH,
    FMT_4CH,
    FMT_DEPTH_STENCIL,
    FMT_UNKNOWN,
};

