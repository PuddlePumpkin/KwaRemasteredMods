#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibility : uint8 {
    None,
    Main,
    Info,
    Reticle = 4,
    Subtitle = 8,
    Breath = 16,
    MapPage = 32,
    QuickKeys = 64,
};

