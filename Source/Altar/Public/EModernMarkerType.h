#pragma once
#include "CoreMinimal.h"
#include "EModernMarkerType.generated.h"

UENUM(BlueprintType)
enum class EModernMarkerType : uint8 {
    None,
    Camp,
    Cave,
    City,
    Elvenruin,
    Fortruin,
    Mine,
    Mountain,
    Tavern,
    Settlement,
    DaedrickShrine,
    OblivionGate,
    Door,
};

