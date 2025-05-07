#pragma once
#include "CoreMinimal.h"
#include "EHitReactionKeyframeType.generated.h"

UENUM(BlueprintType)
enum class EHitReactionKeyframeType : uint8 {
    NONE,
    Heavy,
    Light,
    UpperBody = 4,
    LowerBody = 8,
    SpellArrow = 16,
    LightUpperBody = 6,
    HeavyUpperBody = 5,
    LightLowerBody = 10,
    HeavyLowerBody = 9,
};

