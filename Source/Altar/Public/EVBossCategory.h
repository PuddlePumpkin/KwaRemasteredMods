#pragma once
#include "CoreMinimal.h"
#include "EVBossCategory.generated.h"

UENUM(BlueprintType)
enum class EVBossCategory : uint8 {
    None,
    Normal,
    Quest,
    Dungeon,
};

