#pragma once
#include "CoreMinimal.h"
#include "EPackageTargetType.generated.h"

UENUM()
enum class EPackageTargetType : int8 {
    NONE = -1,
    REFERENCE = 0,
    OBJECT,
    TYPE,
};

