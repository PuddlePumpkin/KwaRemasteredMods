#pragma once
#include "CoreMinimal.h"
#include "ELegacyPlayerMenuPage.generated.h"

UENUM(BlueprintType)
enum class ELegacyPlayerMenuPage : uint8 {
    Stats,
    Inventory,
    Magic,
    Map,
    Quest,
    Codex,
    Settings,
    MAX,
};

