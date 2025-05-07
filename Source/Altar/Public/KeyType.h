#pragma once
#include "CoreMinimal.h"
#include "KeyType.generated.h"

UENUM()
enum class KeyType : uint32 {
    LINEAR_KEY = 1,
    QUADRATIC_KEY,
    TBC_KEY,
    XYZ_ROTATION_KEY,
    CONST_KEY,
};

