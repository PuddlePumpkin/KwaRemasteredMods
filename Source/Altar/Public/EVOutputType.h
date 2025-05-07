#pragma once
#include "CoreMinimal.h"
#include "EVOutputType.generated.h"

UENUM(BlueprintType)
enum class EVOutputType : uint8 {
    System_Mono,
    System_Stereo,
    System_Stereo_Headphones,
    System_Stereo_Surround_5_1 = 4,
    System_Stereo_TvSpeakers = 8,
    None = 16,
};

