#pragma once
#include "CoreMinimal.h"
#include "ELegacyVideoMenuOptionType.generated.h"

UENUM(BlueprintType)
enum class ELegacyVideoMenuOptionType : uint8 {
    None,
    Resolution,
    DefaultButton,
    TextureSize,
    ShadowFiltering,
    WaterDetail,
    BloodDecal,
    AntiAliasing,
};

