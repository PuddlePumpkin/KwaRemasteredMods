#pragma once
#include "CoreMinimal.h"
#include "GrassWaterState.generated.h"

UENUM()
enum class GrassWaterState : int32 {
    GWS_ABOVE_ONLY_ATLEAST,
    GWS_ABOVE_ONLY_ATMOST,
    GWS_BELOW_ONLY_ATLEAST,
    GWS_BELOW_ONLY_ATMOST,
    GWS_BOTH_ATLEAST,
    GWS_BOTH_ATMOST,
    GWS_BOTH_ATMOST_ABOVE,
    GWS_BOTH_ATMOST_BELOW,
    GWS_COUNT,
};

