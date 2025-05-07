#pragma once
#include "CoreMinimal.h"
#include "EVMusicType.generated.h"

UENUM(BlueprintType)
enum class EVMusicType : uint8 {
    Explore,
    Public,
    Dungeon,
    Battle = 4,
    Special = 8,
    Death = 16,
    Success = 32,
    Title = 64,
    None = 128,
};

