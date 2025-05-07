#pragma once
#include "CoreMinimal.h"
#include "ESkeletonAxisForward.generated.h"

UENUM(BlueprintType)
enum class ESkeletonAxisForward : uint8 {
    X,
    Y,
    Z,
    NEG_X,
    NEG_Y,
    NEG_Z,
};

