#pragma once
#include "CoreMinimal.h"
#include "EVelocityType.generated.h"

UENUM()
enum class EVelocityType : uint32 {
    VELOCITY_USE_NORMALS,
    VELOCITY_USE_RANDOM,
    VELOCITY_USE_DIRECTION,
};

