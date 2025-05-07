#pragma once
#include "CoreMinimal.h"
#include "LegacyDialogButton.generated.h"

UENUM(BlueprintType)
enum class LegacyDialogButton : uint8 {
    Persuasion,
    Barter,
    SpellBarter,
    Repairing,
    Training,
    Recharging,
    Goodbye,
};

