#pragma once
#include "CoreMinimal.h"
#include "EVModernSettingsPagePlatormFlag.generated.h"

UENUM(BlueprintType)
enum class EVModernSettingsPagePlatormFlag : uint8 {
    NONE,
    PC,
    XSS,
    XSX = 4,
    PlayStation = 8,
    WinGDK = 16,
    SteamDeck = 32,
};

