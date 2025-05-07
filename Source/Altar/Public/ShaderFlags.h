#pragma once
#include "CoreMinimal.h"
#include "ShaderFlags.generated.h"

UENUM(BlueprintType)
enum class ShaderFlags : uint8 {
    SHADING_HARD,
    SHADING_SMOOTH,
};

