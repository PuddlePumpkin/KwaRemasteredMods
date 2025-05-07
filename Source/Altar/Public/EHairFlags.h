#pragma once
#include "CoreMinimal.h"
#include "EHairFlags.generated.h"

UENUM(BlueprintType)
enum class EHairFlags : uint8 {
    None,
    Playable,
    NoMale,
    NoFemale = 4,
    FixedColor = 8,
};

