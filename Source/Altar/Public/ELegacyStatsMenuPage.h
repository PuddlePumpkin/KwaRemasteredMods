#pragma once
#include "CoreMinimal.h"
#include "ELegacyStatsMenuPage.generated.h"

UENUM(BlueprintType)
enum class ELegacyStatsMenuPage : uint8 {
    Attributes,
    Character,
    Skill,
    Factions,
    Misc,
};

