#pragma once
#include "CoreMinimal.h"
#include "EVCharacterPhenotypeDataFilter.generated.h"

UENUM(BlueprintType)
enum class EVCharacterPhenotypeDataFilter : uint8 {
    None,
    MorphTarget,
    HairPiece,
    Senescence = 4,
    SkinParameter = 8,
    ProceduralHead = 11,
    All = 15,
};

