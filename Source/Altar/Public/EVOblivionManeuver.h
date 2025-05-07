#pragma once
#include "CoreMinimal.h"
#include "EVOblivionManeuver.generated.h"

UENUM(BlueprintType)
enum class EVOblivionManeuver : uint8 {
    ENGAGE,
    IDLE,
    DODGE,
    CLOSE,
    ADVANCE,
    WITHDRAW,
    TAKE_COVER,
    ACQUIRE,
    RUN_AWAY,
    DISMOUNT,
    RANGED_ALERT,
    ON_STATION,
    REPOSITION,
    DISARMED,
    STANDOFF,
    MELEE_ALERT,
    STANDOFF_BACKUP,
};

