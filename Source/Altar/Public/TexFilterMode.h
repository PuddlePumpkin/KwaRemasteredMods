#pragma once
#include "CoreMinimal.h"
#include "TexFilterMode.generated.h"

UENUM()
enum class TexFilterMode : uint32 {
    FILTER_NEAREST,
    FILTER_BILERP,
    FILTER_TRILERP,
    FILTER_NEAREST_MIPLERP = 4,
    FILTER_BILERP_MIPNEAREST,
    FILTER_ANISOTROPIC,
};

