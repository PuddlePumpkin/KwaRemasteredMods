#pragma once
#include "CoreMinimal.h"
#include "EVGenericNavigationAction.generated.h"

UENUM(BlueprintType)
enum class EVGenericNavigationAction : uint8 {
    NavigateUp,
    NavigateRight,
    NavigateDown,
    NavigateLeft,
    Accept,
    Back,
};

