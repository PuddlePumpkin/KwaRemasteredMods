#pragma once
#include "CoreMinimal.h"
#include "EAspectFlags.generated.h"

UENUM()
enum class EAspectFlags : uint16 {
    VELOCITY_ORIENTATION = 1,
    INITIAL_ROTATION_FROM_VELOCITY,
    SPEED_TO_ASPECT_ENABLED = 256,
};

