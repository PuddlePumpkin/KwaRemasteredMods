#pragma once
#include "CoreMinimal.h"
#include "EPackageScheduleDayOfWeek.generated.h"

UENUM()
enum class EPackageScheduleDayOfWeek : int8 {
    NONE = -1,
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    WEEKDAY,
    WEEKEND,
    MWF,
    TT,
    COUNT,
};

