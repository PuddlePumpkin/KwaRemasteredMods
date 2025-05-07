#pragma once
#include "CoreMinimal.h"
#include "EVWeatherTexture.generated.h"

UENUM(BlueprintType)
enum class EVWeatherTexture : uint8 {
    City,
    Foliage,
    Open,
    None = 4,
};

