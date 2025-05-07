#pragma once
#include "CoreMinimal.h"
#include "ESitSleepState.generated.h"

UENUM(BlueprintType)
enum class ESitSleepState : uint8 {
    NORMAL,
    LOAD_SIT_IDLE,
    WANT_TO_SIT,
    WAITING_FOR_SIT_ANIM,
    IS_SITTING,
    WANT_TO_STAND,
    LOAD_SLEEP_IDLE,
    WANT_TO_SLEEP,
    WAITING_FOR_SLEEP_ANIM,
    IS_SLEEPING,
    WANT_TO_WAKE,
    COUNT,
};

