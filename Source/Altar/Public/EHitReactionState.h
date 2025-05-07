#pragma once
#include "CoreMinimal.h"
#include "EHitReactionState.generated.h"

UENUM(BlueprintType)
enum class EHitReactionState : uint8 {
    Default,
    Reaction,
    Recovery,
};

