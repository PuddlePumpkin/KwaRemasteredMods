#pragma once
#include "CoreMinimal.h"
#include "ECrimeTypeEnum.generated.h"

UENUM()
enum class ECrimeTypeEnum {
    NONE = -1,
    STEAL = 0,
    PICKPOCKET,
    TRESPASS,
    ATTACK,
    MURDER,
    STEAL_HORSE,
    CRIME_COUNT,
};

