#pragma once
#include "CoreMinimal.h"
#include "EModernSettingWidgetState.generated.h"

UENUM(BlueprintType)
enum class EModernSettingWidgetState : uint8 {
    Default,
    Hover,
    Disable,
};

