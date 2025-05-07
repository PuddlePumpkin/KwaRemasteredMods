#pragma once
#include "CoreMinimal.h"
#include "ELegacyXboxFloatingHintButton.generated.h"

UENUM(BlueprintType)
enum class ELegacyXboxFloatingHintButton : uint8 {
    Start,
    Back,
    LeftThumbstick,
    RightThumbstick,
    A,
    B,
    X,
    Y,
    RightShoulder,
    LeftShoulder,
    LeftTrigger,
    RightTrigger,
    None,
};

