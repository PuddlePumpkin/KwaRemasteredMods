#pragma once
#include "CoreMinimal.h"
#include "ELegacyMagicMenuPage.generated.h"

UENUM(BlueprintType)
enum class ELegacyMagicMenuPage : uint8 {
    Self,
    Touch,
    Target,
    All,
    Active,
};

