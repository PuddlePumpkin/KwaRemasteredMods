#pragma once
#include "CoreMinimal.h"
#include "ESkillMenuType.generated.h"

UENUM(BlueprintType)
enum class ESkillMenuType : uint8 {
    Skills,
    Attributes,
    Specialisation,
    BirthSign,
    Overview,
};

