#pragma once
#include "CoreMinimal.h"
#include "EVInstanceReplacementType.generated.h"

UENUM(BlueprintType)
enum class EVInstanceReplacementType : uint8 {
    Remove,
    Keep,
    Mesh,
    Material,
};

