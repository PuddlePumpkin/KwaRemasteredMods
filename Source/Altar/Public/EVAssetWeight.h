#pragma once
#include "CoreMinimal.h"
#include "EVAssetWeight.generated.h"

UENUM(BlueprintType)
enum class EVAssetWeight : uint8 {
    Light,
    Medium,
    Heavy,
    Default = Light,
    Min = Light,
    Max = Heavy,
};

