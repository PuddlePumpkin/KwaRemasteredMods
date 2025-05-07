#pragma once
#include "CoreMinimal.h"
#include "EVAltarPerformanceContextFlags.generated.h"

UENUM()
enum class EVAltarPerformanceContextFlags : uint8 {
    Startup = 1,
    LoadingScreen,
    PlayerLoadGame = 4,
    PlayerSaveGame = 8,
    UiMenuVisiblePaused = 16,
};

