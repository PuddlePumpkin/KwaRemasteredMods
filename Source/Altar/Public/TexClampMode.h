#pragma once
#include "CoreMinimal.h"
#include "TexClampMode.generated.h"

UENUM()
enum class TexClampMode : uint32 {
    CLAMP_S_CLAMP_T,
    CLAMP_S_WRAP_T,
    WRAP_S_CLAMP_T,
    WRAP_S_WRAP_T,
};

