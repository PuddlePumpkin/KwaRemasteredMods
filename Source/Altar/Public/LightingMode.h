#pragma once
#include "CoreMinimal.h"
#include "LightingMode.generated.h"

UENUM()
enum class LightingMode : uint32 {
    LIGHT_MODE_EMISSIVE,
    LIGHT_MODE_EMI_AMB_DIF,
};

