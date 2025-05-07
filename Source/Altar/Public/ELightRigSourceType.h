#pragma once
#include "CoreMinimal.h"
#include "ELightRigSourceType.generated.h"

UENUM(BlueprintType)
enum class ELightRigSourceType : uint8 {
    GLOBAL_LIGHTING,
    TRIGGER_VOLUME,
};

