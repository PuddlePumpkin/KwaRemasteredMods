#pragma once
#include "CoreMinimal.h"
#include "EKeyInputReplayInputType.generated.h"

UENUM(BlueprintType)
enum class EKeyInputReplayInputType : uint8 {
    KeyDown,
    KeyUp,
    AnalogInput,
    MouseMove,
    MouseButtonDown,
    MouseButtonUp,
    MouseButtonDoubleClick,
    MouseWheelOrGesture,
    MotionDetected,
    SkippedInput,
    Invalid,
};

