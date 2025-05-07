#pragma once
#include "CoreMinimal.h"
#include "AnimationType.generated.h"

UENUM()
enum class AnimationType : uint8 {
    Sit = 1,
    Sleep,
    Lean = 4,
};

