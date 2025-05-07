#pragma once
#include "CoreMinimal.h"
#include "ELightRigState.generated.h"

UENUM(BlueprintType)
enum class ELightRigState : uint8 {
    DISABLE,
    TICKABLE,
    FADEOUT,
    COMPLETED,
};

