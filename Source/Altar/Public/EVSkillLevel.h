#pragma once
#include "CoreMinimal.h"
#include "EVSkillLevel.generated.h"

UENUM(BlueprintType)
enum class EVSkillLevel : uint8 {
    Novice,
    Apprentice,
    Journeyman,
    Expert,
    Master,
    SkillLevelCount,
};

