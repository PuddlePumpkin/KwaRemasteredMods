#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirection.generated.h"

UENUM(BlueprintType)
enum class EDodgeDirection : uint8 {
    NONE = 10,
    Right = 0,
    BackRight,
    Back,
    BackLeft,
    Left,
    ForwardLeft,
    Forward,
    ForwardRight,
};

