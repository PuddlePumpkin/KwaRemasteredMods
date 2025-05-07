#pragma once
#include "CoreMinimal.h"
#include "ELegacyHudInfoIcon.generated.h"

UENUM(BlueprintType)
enum class ELegacyHudInfoIcon : uint8 {
    Uses,
    Weight,
    Action,
    Quality,
    Armor,
    Damage,
    Lock,
    Value,
    Health,
    NumIcons,
};

