#pragma once
#include "CoreMinimal.h"
#include "EVForwardTransformPairingStep.generated.h"

UENUM(BlueprintType)
enum class EVForwardTransformPairingStep : uint8 {
    RawData,
    Conversion,
    LevelOffset,
    ActorOffset,
    Adjustment,
};

