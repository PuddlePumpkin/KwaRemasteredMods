#pragma once
#include "CoreMinimal.h"
#include "EVSaveNotificationType.generated.h"

UENUM(BlueprintType)
enum class EVSaveNotificationType : uint8 {
    EManualSaveSucceeded,
    EAutosavingSucceeded,
    EQuicksavingSucceeded,
    ESaveErrorDiskFull,
};

