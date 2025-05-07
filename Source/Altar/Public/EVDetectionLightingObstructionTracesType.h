#pragma once
#include "CoreMinimal.h"
#include "EVDetectionLightingObstructionTracesType.generated.h"

UENUM(BlueprintType)
enum class EVDetectionLightingObstructionTracesType : uint8 {
    CentersOnly,
    LightsCenterToPlayerShoulders,
    LightEdgesToPlayerFourPoints,
};

