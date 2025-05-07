#pragma once
#include "CoreMinimal.h"
#include "ELegacyGameplayMenuIDs.generated.h"

UENUM(BlueprintType)
enum class ELegacyGameplayMenuIDs : uint8 {
    None,
    DifficultyScrollBar,
    DifficultyScrollBarMarker,
    GeneralSubtitlesButton,
    DialogueSubtitlesButton,
    CrossHairButton,
    SaveRestButton,
    SaveWaitButton,
    SaveTravelButton,
    DefaultsButton,
    ReturnButton,
};

