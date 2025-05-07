#pragma once
#include "CoreMinimal.h"
#include "EVSpecialCommandType.generated.h"

UENUM(BlueprintType)
enum class EVSpecialCommandType : uint8 {
    COC,
    LOAD,
    NOT_SPECIAL,
};

