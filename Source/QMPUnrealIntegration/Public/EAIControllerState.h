#pragma once
#include "CoreMinimal.h"
#include "EAIControllerState.generated.h"

UENUM(BlueprintType)
enum class EAIControllerState : uint8 {
    DEFAULT,
    ISMOVINGTOINTERACT,
    ENDMOVETOINTERACT,
    RESYNCING = 4,
};

