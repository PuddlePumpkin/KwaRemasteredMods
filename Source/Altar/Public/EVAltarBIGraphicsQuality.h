#pragma once
#include "CoreMinimal.h"
#include "EVAltarBIGraphicsQuality.generated.h"

UENUM()
enum class EVAltarBIGraphicsQuality {
    Invalid = -1,
    Unknown = Invalid,
    Custom = 0,
    Cinematic,
    Ultra,
    High,
    Medium,
    Low,
    Console_Quality,
    Console_Performance,
    Console_XSS_Locked,
};

