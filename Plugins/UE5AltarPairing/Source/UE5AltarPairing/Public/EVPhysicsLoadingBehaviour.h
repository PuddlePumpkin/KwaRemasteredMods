#pragma once
#include "CoreMinimal.h"
#include "EVPhysicsLoadingBehaviour.generated.h"

UENUM(BlueprintType)
enum class EVPhysicsLoadingBehaviour : uint8 {
    IGNORE_LOAD,
    LOAD_POSE_FROM_SAVE,
};

