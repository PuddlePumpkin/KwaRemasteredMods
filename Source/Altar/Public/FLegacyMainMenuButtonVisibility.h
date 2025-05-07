#pragma once
#include "CoreMinimal.h"
#include "FLegacyMainMenuButtonVisibility.generated.h"

UENUM(BlueprintType)
enum class FLegacyMainMenuButtonVisibility : uint8 {
    None,
    PressStart,
    Buttons,
};

