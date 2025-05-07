#pragma once
#include "CoreMinimal.h"
#include "EATMTimeUpdateSource.generated.h"

UENUM(BlueprintType)
enum class EATMTimeUpdateSource : uint8 {
    FROM_INIT,
    FROM_TICK,
    FROM_GAMEPLAY,
    FROM_DEBUG,
};

