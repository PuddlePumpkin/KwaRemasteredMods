#pragma once
#include "CoreMinimal.h"
#include "EVGetOblivionSaveDataResult.generated.h"

UENUM(BlueprintType)
enum class EVGetOblivionSaveDataResult : uint8 {
    SaveSystemIsBusy,
    Success,
    PlayerNeedToDownload,
    ErrorSaveDeletedOrCorrupted,
};

