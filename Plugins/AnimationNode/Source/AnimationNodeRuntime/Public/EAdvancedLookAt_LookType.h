#pragma once
#include "CoreMinimal.h"
#include "EAdvancedLookAt_LookType.generated.h"

UENUM(BlueprintType)
enum class EAdvancedLookAt_LookType : uint8 {
    GLANCE,
    HEAD_TRACKING,
    UPPERBODY,
};

