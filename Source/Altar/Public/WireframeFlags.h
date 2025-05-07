#pragma once
#include "CoreMinimal.h"
#include "WireframeFlags.generated.h"

UENUM()
enum class WireframeFlags : uint16 {
    WIREFRAME_DISABLED,
    WIREFRAME_ENABLED,
};

