#pragma once
#include "CoreMinimal.h"
#include "EStatGroupType.generated.h"

UENUM(BlueprintType)
enum class EStatGroupType : uint8 {
    Attribute,
    Skill,
    Resist,
};

