#pragma once
#include "CoreMinimal.h"
#include "EApparatusType.generated.h"

UENUM(BlueprintType)
enum class EApparatusType : uint8 {
    APPARATUS_MORTAR_PESTLE,
    APPARATUS_ALEMBIC,
    APPARATUS_CALCINATOR,
    APPARATUS_RETORT,
};

