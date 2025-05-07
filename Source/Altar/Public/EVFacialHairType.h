#pragma once
#include "CoreMinimal.h"
#include "EVFacialHairType.generated.h"

UENUM(BlueprintType)
enum class EVFacialHairType : uint8 {
    Hair,
    Beard,
    Mustache,
    Eyebrows,
    FACIAL_HAIR_COUNT,
};

