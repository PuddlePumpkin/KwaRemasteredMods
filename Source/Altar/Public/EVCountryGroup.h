#pragma once
#include "CoreMinimal.h"
#include "EVCountryGroup.generated.h"

UENUM(BlueprintType)
enum class EVCountryGroup : uint8 {
    SIEA,
    SIEE,
    SIEJA_Asia,
    SIEJA_Japan,
    None,
};

