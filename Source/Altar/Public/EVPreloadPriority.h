#pragma once
#include "CoreMinimal.h"
#include "EVPreloadPriority.generated.h"

UENUM(BlueprintType)
enum class EVPreloadPriority : uint8 {
    Low,
    Normal,
    High,
    Critical,
    Default = Normal,
    Min = Low,
    Max = Critical,
};

