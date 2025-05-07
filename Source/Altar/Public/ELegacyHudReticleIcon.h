#pragma once
#include "CoreMinimal.h"
#include "ELegacyHudReticleIcon.generated.h"

UENUM(BlueprintType)
enum class ELegacyHudReticleIcon : uint8 {
    None,
    Take,
    Open,
    Sit,
    Activate,
    Sleep,
    Read,
    Talk,
    OpenDoor,
    Horse,
    Crown,
    Vampire,
    COUNT,
};

