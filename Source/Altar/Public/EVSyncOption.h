#pragma once
#include "CoreMinimal.h"
#include "EVSyncOption.generated.h"

UENUM(BlueprintType)
enum class EVSyncOption : uint8 {
    VSYNC_OFF,
    VSYNC_MATCHING_REFRESH_RATE,
    VSYNC_HALF_SCREEN_REFRESH_RATE,
    VSYNC_ONE_THIRD_SCREEN_REFRESH_RATE,
    VSYNC_QUARTER_SCREEN_REFRESH_RATE,
};

