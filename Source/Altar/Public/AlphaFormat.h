#pragma once
#include "CoreMinimal.h"
#include "AlphaFormat.generated.h"

UENUM()
enum class AlphaFormat : uint32 {
    ALPHA_NONE,
    ALPHA_BINARY,
    ALPHA_SMOOTH,
    ALPHA_DEFAULT,
};

