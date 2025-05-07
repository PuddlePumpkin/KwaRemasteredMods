#pragma once
#include "CoreMinimal.h"
#include "ELegacyEffectEntryType.generated.h"

UENUM(BlueprintType)
enum class ELegacyEffectEntryType : uint8 {
    Magnitude,
    Area,
    Duration,
    Range,
    Attribute,
    Skill,
    Lock,
    None,
};

