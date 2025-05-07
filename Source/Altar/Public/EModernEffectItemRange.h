#pragma once
#include "CoreMinimal.h"
#include "EModernEffectItemRange.generated.h"

UENUM(BlueprintType)
enum class EModernEffectItemRange : uint8 {
    Self,
    Touch,
    Target,
    Strike,
};

