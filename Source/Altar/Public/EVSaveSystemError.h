#pragma once
#include "CoreMinimal.h"
#include "EVSaveSystemError.generated.h"

UENUM(BlueprintType)
enum class EVSaveSystemError : uint8 {
    Unknown,
    SaveSystemBusy,
    SaveNotFound,
    SaveCorrupted,
    NotEnoughDiskSpace,
};

