#pragma once
#include "CoreMinimal.h"
#include "EModernSettingWidgetType.generated.h"

UENUM(BlueprintType)
enum class EModernSettingWidgetType : uint8 {
    Button,
    Step,
    Slider,
    ComboBox,
    Preset,
    Custom,
};

