#pragma once
#include "CoreMinimal.h"
#include "EVAvoidanceMask.generated.h"

UENUM(BlueprintType)
enum class EVAvoidanceMask : uint8 {
    None,
    Ragdoll,
    Pawn,
};

