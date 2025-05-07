#pragma once
#include "CoreMinimal.h"
#include "ELegacyMapMenuPage.generated.h"

UENUM(BlueprintType)
enum class ELegacyMapMenuPage : uint8 {
    LocalMap,
    WorldMap,
    ActiveQuest,
    CurrentQuests,
    CompletedQuests,
};

