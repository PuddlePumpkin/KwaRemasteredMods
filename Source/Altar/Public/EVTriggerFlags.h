#pragma once
#include "CoreMinimal.h"
#include "EVTriggerFlags.generated.h"

UENUM(BlueprintType)
enum class EVTriggerFlags : uint8 {
    None,
    VFX,
    Gameplay,
    All,
};

