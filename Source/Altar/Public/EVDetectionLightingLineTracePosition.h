#pragma once
#include "CoreMinimal.h"
#include "EVDetectionLightingLineTracePosition.generated.h"

UENUM(BlueprintType)
enum class EVDetectionLightingLineTracePosition : uint8 {
    Center,
    Top,
    Left,
    Right,
    Bottom,
};

