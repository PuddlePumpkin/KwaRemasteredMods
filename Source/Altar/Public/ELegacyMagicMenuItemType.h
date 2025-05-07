#pragma once
#include "CoreMinimal.h"
#include "ELegacyMagicMenuItemType.generated.h"

UENUM(BlueprintType)
enum class ELegacyMagicMenuItemType : uint8 {
    None,
    Target,
    Touch,
    OnSelf = 4,
    Active = 8,
};

