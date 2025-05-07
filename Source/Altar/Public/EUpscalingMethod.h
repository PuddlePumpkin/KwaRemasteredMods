#pragma once
#include "CoreMinimal.h"
#include "EUpscalingMethod.generated.h"

UENUM(BlueprintType)
enum class EUpscalingMethod : uint8 {
    UPSCALER_NONE,
    UPSCALER_DLSS,
    UPSCALER_FSR3,
    UPSCALER_XESS,
};

