#pragma once
#include "CoreMinimal.h"
#include "ENavigationInputAction.generated.h"

UENUM(BlueprintType)
enum class ENavigationInputAction : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
    Select,
    Cancel,
};

