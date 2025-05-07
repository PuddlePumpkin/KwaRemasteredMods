#pragma once
#include "CoreMinimal.h"
#include "EVCharacterRefreshSelector.generated.h"

UENUM(BlueprintType)
enum class EVCharacterRefreshSelector : uint8 {
    None,
    BodySection,
    BodyPart,
    Phenotype = 4,
    Weapons = 8,
    All = 15,
};

