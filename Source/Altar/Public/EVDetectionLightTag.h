#pragma once
#include "CoreMinimal.h"
#include "EVDetectionLightTag.generated.h"

UENUM(BlueprintType)
enum class EVDetectionLightTag : uint8 {
    None,
    Fake,
    Skip,
};

