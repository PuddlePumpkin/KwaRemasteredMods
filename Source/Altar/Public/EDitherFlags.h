#pragma once
#include "CoreMinimal.h"
#include "EDitherFlags.generated.h"

UENUM()
enum class EDitherFlags : uint16 {
    DITHER_DISABLED,
    DITHER_ENABLED,
};

