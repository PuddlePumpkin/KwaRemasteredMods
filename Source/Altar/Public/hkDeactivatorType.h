#pragma once
#include "CoreMinimal.h"
#include "hkDeactivatorType.generated.h"

UENUM()
enum class hkDeactivatorType : int8 {
    DEACTIVATOR_INVALID,
    DEACTIVATOR_NEVER,
    DEACTIVATOR_SPATIAL,
};

