#pragma once
#include "CoreMinimal.h"
#include "EPackageType.generated.h"

UENUM()
enum class EPackageType {
    NONE = -1,
    EXPLORE = 0,
    FOLLOW,
    ESCORT,
    EAT,
    SLEEP,
    WANDER,
    TRAVEL,
    ACCOMPANY,
    USEITEMAT,
    AMBUSH,
    FLEE_NON_COMBAT,
    CAST_MAGIC,
    COUNT,
};

