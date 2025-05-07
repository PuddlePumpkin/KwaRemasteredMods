#pragma once
#include "CoreMinimal.h"
#include "FLegacyControlsDevice.generated.h"

UENUM(BlueprintType)
enum class FLegacyControlsDevice : uint8 {
    Keyboard,
    Mouse,
    Joystick,
    Controller,
};

