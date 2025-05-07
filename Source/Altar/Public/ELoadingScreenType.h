#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenType.generated.h"

UENUM(BlueprintType)
enum class ELoadingScreenType : uint8 {
    FromLoadingGame,
    FromLevelChange,
    FromNewGame,
    Count,
};

