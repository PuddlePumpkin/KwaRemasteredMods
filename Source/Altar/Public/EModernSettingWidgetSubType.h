#pragma once
#include "CoreMinimal.h"
#include "EModernSettingWidgetSubType.generated.h"

UENUM(BlueprintType)
enum class EModernSettingWidgetSubType : uint8 {
    NONE,
    Resolution,
    Upscaler,
    RayTracing,
    Quality,
    HDR,
    HDROptions,
    Language,
    SDROptions,
    Monitors,
    AdaptiveTriggerToggle,
    VibrationToggle,
    VibrationStrength,
    AimAssistToggle,
    AimAssistSensitivity,
    NoLocaToggle,
    GenericGamepadSettings,
};

