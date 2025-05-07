#pragma once
#include "CoreMinimal.h"
#include "ELegacyRaceSexMenuWidgetType.generated.h"

UENUM(BlueprintType)
enum class ELegacyRaceSexMenuWidgetType : uint8 {
    Button,
    Toggle,
    Slider,
    Text,
    ColorPicker,
    EyebrowColorPicker,
};

