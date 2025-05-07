#pragma once
#include "CoreMinimal.h"
#include "ETexType.generated.h"

UENUM()
enum class ETexType : uint32 {
    BASE_MAP,
    DARK_MAP,
    DETAIL_MAP,
    GLOSS_MAP,
    GLOW_MAP,
    BUMP_MAP,
    NORMAL_MAP,
    PARALLAX_MAP,
    DECAL_0_MAP,
    DECAL_1_MAP,
    DECAL_2_MAP,
    DECAL_3_MAP,
};

