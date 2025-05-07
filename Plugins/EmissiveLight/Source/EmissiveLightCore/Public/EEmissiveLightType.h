#pragma once
#include "CoreMinimal.h"
#include "EEmissiveLightType.generated.h"

UENUM(BlueprintType)
enum class EEmissiveLightType : uint8 {
    Plane,
    Sphere,
};

