#pragma once
#include "CoreMinimal.h"
#include "EVSaveSystemStatus.generated.h"

UENUM(BlueprintType)
enum class EVSaveSystemStatus : uint8 {
    SavingGame,
    SavingMetaData,
    WaitingForOblivionSaveGameLoad,
    Loading,
    Done,
};

