#pragma once
#include "CoreMinimal.h"
#include "EVPriorityTypeOnPawn.generated.h"

UENUM(BlueprintType)
enum class EVPriorityTypeOnPawn : uint8 {
    LastArrivedIsPlayed,
    HighPriority,
    EnchantmentEffect,
    NotAPawnEffect,
};

