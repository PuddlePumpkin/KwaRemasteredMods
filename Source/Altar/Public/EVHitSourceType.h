#pragma once
#include "CoreMinimal.h"
#include "EVHitSourceType.generated.h"

UENUM(BlueprintType)
enum class EVHitSourceType : uint8 {
    LightAttack,
    PowerAttack,
    Arrow,
    Other,
};

