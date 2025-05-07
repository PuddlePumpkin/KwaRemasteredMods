#pragma once
#include "CoreMinimal.h"
#include "ESkillAndClassSpecialization.generated.h"

UENUM(BlueprintType)
enum class ESkillAndClassSpecialization : uint8 {
    Combat,
    Magic,
    Stealth,
    None,
};

