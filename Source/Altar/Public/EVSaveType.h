#pragma once
#include "CoreMinimal.h"
#include "EVSaveType.generated.h"

UENUM()
enum class EVSaveType : int32 {
    Manual,
    Auto,
    Quick,
};

