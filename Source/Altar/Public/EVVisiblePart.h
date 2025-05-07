#pragma once
#include "CoreMinimal.h"
#include "EVVisiblePart.generated.h"

UENUM(BlueprintType)
enum class EVVisiblePart : uint8 {
    Bottom,
    Middle,
    Top,
    None,
};

