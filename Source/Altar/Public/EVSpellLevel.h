#pragma once
#include "CoreMinimal.h"
#include "EVSpellLevel.generated.h"

UENUM(BlueprintType)
enum class EVSpellLevel : uint8 {
    NOVICE,
    APPRENTICE,
    JOURNEYMAN,
    EXPERT,
    MASTER,
};

