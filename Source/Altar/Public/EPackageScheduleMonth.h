#pragma once
#include "CoreMinimal.h"
#include "EPackageScheduleMonth.generated.h"

UENUM()
enum class EPackageScheduleMonth : int8 {
    NONE = -1,
    MORNINGSTAR = 0,
    SUNSDAWN,
    FIRSTSEED,
    RAINSHAND,
    SECONDSEED,
    MIDYEAR,
    SUNSHEIGHT,
    LASTSEED,
    HEARTFIRE,
    FROSTFALL,
    SUNSDUSK,
    EVENINGSTAR,
    SPRING,
    SUMMER,
    FALL,
    WINTER,
    COUNT,
};

