#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadMenuOpeningSource.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadMenuOpeningSource : uint8 {
    Unknown,
    FromMainMenu,
    FromInGame,
    FromDeath,
};

