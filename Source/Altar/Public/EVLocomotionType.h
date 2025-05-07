#pragma once
#include "CoreMinimal.h"
#include "EVLocomotionType.generated.h"

UENUM(BlueprintType)
enum class EVLocomotionType : uint8 {
    Walking,
    Running,
    SneakingWalking,
    SneakingRunning,
    Landing,
};

