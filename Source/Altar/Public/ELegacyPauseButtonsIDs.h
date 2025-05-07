#pragma once
#include "CoreMinimal.h"
#include "ELegacyPauseButtonsIDs.generated.h"

UENUM(BlueprintType)
enum class ELegacyPauseButtonsIDs : uint8 {
    Default,
    Return = 3,
    Save,
    Load,
    Options = 7,
    Quit,
};

