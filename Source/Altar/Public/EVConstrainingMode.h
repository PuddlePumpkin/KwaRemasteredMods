#pragma once
#include "CoreMinimal.h"
#include "EVConstrainingMode.generated.h"

UENUM(BlueprintType)
enum class EVConstrainingMode : uint8 {
    Free,
    LockOnlyLeaves,
    LockAllBodies,
};

