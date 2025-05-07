#pragma once
#include "CoreMinimal.h"
#include "EModernMagnitudeType.generated.h"

UENUM(BlueprintType)
enum class EModernMagnitudeType : uint8 {
    Percent,
    Level,
    Feet,
    Raw,
};

