#pragma once
#include "CoreMinimal.h"
#include "EVWeightCategory.generated.h"

UENUM(BlueprintType)
enum class EVWeightCategory : uint8 {
    LIGHT,
    HEAVY,
    NONE,
};

