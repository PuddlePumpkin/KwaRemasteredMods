#pragma once
#include "CoreMinimal.h"
#include "EGPUType.generated.h"

UENUM(BlueprintType)
enum class EGPUType : uint8 {
    OTHER,
    NVIDIA,
    AMD,
    INTEL,
};

