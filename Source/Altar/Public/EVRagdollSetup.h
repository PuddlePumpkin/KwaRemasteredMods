#pragma once
#include "CoreMinimal.h"
#include "EVRagdollSetup.generated.h"

UENUM(BlueprintType)
enum class EVRagdollSetup : uint8 {
    None,
    Paralyzed,
    KO,
    Dead,
};

