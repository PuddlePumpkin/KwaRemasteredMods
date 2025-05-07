#pragma once
#include "CoreMinimal.h"
#include "EVPhysicsSettingsAuthority.generated.h"

UENUM(BlueprintType)
enum class EVPhysicsSettingsAuthority : uint8 {
    FROM_INI_FILE,
    FROM_BLUEPRINT,
    DRIVEN_BY_CODE,
};

