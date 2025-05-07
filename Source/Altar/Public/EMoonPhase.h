#pragma once
#include "CoreMinimal.h"
#include "EMoonPhase.generated.h"

UENUM(BlueprintType)
enum class EMoonPhase : uint8 {
    PH_FULL,
    PH_3Q_WAN,
    PH_HALF_WAN,
    PH_1Q_WAN,
    PH_NEW,
    PH_1Q_WAX,
    PH_HALF_WAX,
    PH_3Q_WAX,
    NUM_PHASES,
};

