#pragma once
#include "CoreMinimal.h"
#include "EVVolumeSettings.generated.h"

UENUM(BlueprintType)
enum class EVVolumeSettings : uint8 {
    AmbienceVolume,
    DialogueVolume,
    FootstepsVolume,
    InterfaceVolume = 4,
    MasterVolume = 8,
    MusicVolume = 16,
    SfxVolume = 32,
    None = 64,
};

