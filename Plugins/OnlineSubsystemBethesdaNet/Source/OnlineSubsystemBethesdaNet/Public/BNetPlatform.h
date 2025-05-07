#pragma once
#include "CoreMinimal.h"
#include "BNetPlatform.generated.h"

UENUM(BlueprintType)
enum class BNetPlatform : uint8 {
    Unknown,
    BethesdaNet,
    Steam,
    EpicServices,
    MicrosoftStore,
    XboxLive,
    PlayStationNetwork,
};

