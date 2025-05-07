#pragma once
#include "CoreMinimal.h"
#include "StencilAction.generated.h"

UENUM()
enum class StencilAction : uint32 {
    ACTION_KEEP,
    ACTION_ZERO,
    ACTION_REPLACE,
    ACTION_INCREMENT,
    ACTION_DECREMENT,
    ACTION_INVERT,
};

