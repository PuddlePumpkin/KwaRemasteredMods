#pragma once
#include "CoreMinimal.h"
#include "EAttributeStat.generated.h"

UENUM(BlueprintType)
enum class EAttributeStat : uint8 {
    STRENGTH,
    INTELLIGENCE,
    WILLPOWER,
    AGILITY,
    SPEED,
    ENDURANCE,
    PERSONALITY,
    LUCK,
    MAGICKA = 9,
};

