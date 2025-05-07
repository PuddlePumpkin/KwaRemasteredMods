#pragma once
#include "CoreMinimal.h"
#include "FModernSettingsPageType.generated.h"

UENUM(BlueprintType)
enum class FModernSettingsPageType : uint8 {
    Settings,
    Rebind,
    Override,
};

