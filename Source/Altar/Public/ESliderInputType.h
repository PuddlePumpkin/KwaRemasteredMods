#pragma once
#include "CoreMinimal.h"
#include "ESliderInputType.generated.h"

UENUM(BlueprintType)
enum class ESliderInputType : uint8 {
    MouseWheel,
    SliderArrows,
    ControllerTriggers,
};

