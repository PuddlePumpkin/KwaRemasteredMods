#pragma once
#include "CoreMinimal.h"
#include "EBipedModularBodySlot.generated.h"

UENUM(BlueprintType)
enum class EBipedModularBodySlot : uint8 {
    Helmet,
    Head,
    UpperBody,
    LowerBody,
    Hands,
    Feet,
    Tail,
    RightRing,
    LeftRing,
    Amulet,
    Count,
};

