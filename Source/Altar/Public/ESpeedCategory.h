#pragma once
#include "CoreMinimal.h"
#include "ESpeedCategory.generated.h"

UENUM(BlueprintType)
enum class ESpeedCategory : uint8 {
    NONE,
    FAST,
    NORMAL,
    SLOW,
};

