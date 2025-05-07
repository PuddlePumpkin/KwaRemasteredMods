#pragma once
#include "CoreMinimal.h"
#include "ELeveledObjectFlags.generated.h"

UENUM()
enum class ELeveledObjectFlags : uint8 {
    CalculateAllBelowLevel = 1,
    CalculateForAllInCount,
};

