#pragma once
#include "CoreMinimal.h"
#include "EPackageLocationType.generated.h"

UENUM()
enum class EPackageLocationType : int8 {
    NONE = -1,
    REFERENCE = 0,
    CELL,
    CURRLOC,
    EDITORLOC,
    OBJECT,
    TYPE,
};

