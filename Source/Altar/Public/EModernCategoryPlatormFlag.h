#pragma once
#include "CoreMinimal.h"
#include "EModernCategoryPlatormFlag.generated.h"

UENUM(BlueprintType)
enum class EModernCategoryPlatormFlag : uint8 {
    NONE,
    PC,
    XSS,
    XSX = 4,
    PlayStation = 8,
    WinGDK = 16,
    SteamDeck = 32,
};

