#pragma once
#include "CoreMinimal.h"
#include "EVGameplayHitboxBehaviour.generated.h"

UENUM()
enum class EVGameplayHitboxBehaviour : int32 {
    Default,
    Trap,
    Trigger,
};

