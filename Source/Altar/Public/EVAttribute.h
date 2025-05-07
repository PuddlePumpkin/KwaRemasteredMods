#pragma once
#include "CoreMinimal.h"
#include "EVAttribute.generated.h"

UENUM(BlueprintType)
enum class EVAttribute : uint8 {
    Strength,
    Intelligence,
    Willpower,
    Agility,
    Speed,
    Endurance,
    Personality,
    Luck,
};

