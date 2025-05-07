#pragma once
#include "CoreMinimal.h"
#include "EMordernLockLevel.generated.h"

UENUM(BlueprintType)
enum class EMordernLockLevel : uint8 {
    VeryEasy,
    Easy,
    Average,
    Hard,
    VeryHard,
    Impossible,
};

