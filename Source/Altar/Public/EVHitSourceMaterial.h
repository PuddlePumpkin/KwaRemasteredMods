#pragma once
#include "CoreMinimal.h"
#include "EVHitSourceMaterial.generated.h"

UENUM(BlueprintType)
enum class EVHitSourceMaterial : uint8 {
    Metal,
    Wood,
    Flesh,
    Magical,
};

