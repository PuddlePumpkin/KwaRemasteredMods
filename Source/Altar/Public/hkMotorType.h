#pragma once
#include "CoreMinimal.h"
#include "hkMotorType.generated.h"

UENUM(BlueprintType)
enum class hkMotorType : uint8 {
    MOTOR_NONE,
    MOTOR_POSITION,
    MOTOR_VELOCITY,
    MOTOR_SPRING,
};

