#pragma once
#include "CoreMinimal.h"
#include "EHoudiniAttributes.generated.h"

UENUM(BlueprintType)
enum EHoudiniAttributes {
    HOUDINI_ATTR_BEGIN,
    position = HOUDINI_ATTR_BEGIN,
    Normal,
    Time,
    POINTID,
    LIFE,
    Color,
    ALPHA,
    Velocity,
    Type,
    Impulse,
    Age,
    HOUDINI_ATTR_SIZE,
    HOUDINI_ATTR_END = Age,
};

