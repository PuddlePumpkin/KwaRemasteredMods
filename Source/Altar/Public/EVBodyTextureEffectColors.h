#pragma once
#include "CoreMinimal.h"
#include "EVBodyTextureEffectColors.generated.h"

UENUM(BlueprintType)
enum class EVBodyTextureEffectColors : uint8 {
    None,
    MainColor,
    BackgroundColor,
    FresnelColor,
    MainAndBackgroundColors,
    MainAndFresnelColors,
    BackgroundAndFresnelColors,
    AllColors,
};

