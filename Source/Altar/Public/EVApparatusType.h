#pragma once
#include "CoreMinimal.h"
#include "EVApparatusType.generated.h"

UENUM(BlueprintType)
enum class EVApparatusType : uint8 {
    APPARATUS_Mortar,
    APPARATUS_Alembic,
    APPARATUS_Retort,
    APPARATUS_Calcinator,
};

