#pragma once
#include "CoreMinimal.h"
#include "EVNavigationDirection.generated.h"

UENUM(BlueprintType)
enum class EVNavigationDirection : uint8 {
    Up,
    Right,
    Down,
    Left,
};

