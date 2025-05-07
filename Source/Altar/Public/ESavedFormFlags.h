#pragma once
#include "CoreMinimal.h"
#include "ESavedFormFlags.generated.h"

UENUM()
enum class ESavedFormFlags {
    Deleted = 32,
    Disabled = 2048,
    QuestItem = 1024,
    DistantReference = 32768,
    CastShadows = 512,
    FireOff = 128,
    BorderRegion = 64,
    Dangerous = 131072,
    CantWait = 524288,
};

