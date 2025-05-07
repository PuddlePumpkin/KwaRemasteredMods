#pragma once
#include "CoreMinimal.h"
#include "ELegacySettingsMenuIDs.generated.h"

UENUM(BlueprintType)
enum class ELegacySettingsMenuIDs : uint8 {
    None,
    ReturnButton = 2,
    GamePlayButton = 5,
    VideoButton,
    AudioButton,
    ControlsButton,
};

