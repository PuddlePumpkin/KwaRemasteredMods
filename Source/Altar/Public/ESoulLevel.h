#pragma once
#include "CoreMinimal.h"
#include "ESoulLevel.generated.h"

UENUM(BlueprintType)
enum class ESoulLevel : uint8 {
    None,
    Petty,
    Lesser,
    Common,
    Greater,
    Grand,
};

