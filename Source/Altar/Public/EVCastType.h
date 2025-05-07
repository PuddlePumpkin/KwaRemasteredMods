#pragma once
#include "CoreMinimal.h"
#include "EVCastType.generated.h"

UENUM(BlueprintType)
enum class EVCastType : uint8 {
    Self,
    Touch,
    Target,
    Unknown,
};

