#pragma once
#include "CoreMinimal.h"
#include "EVBassManagement.generated.h"

UENUM(BlueprintType)
enum class EVBassManagement : uint8 {
    Default,
    LowFrequencyBoost,
    NightMode,
    None = 4,
};

