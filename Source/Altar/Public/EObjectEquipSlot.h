#pragma once
#include "CoreMinimal.h"
#include "EObjectEquipSlot.generated.h"

UENUM(BlueprintType)
enum class EObjectEquipSlot : uint8 {
    Head,
    Hair,
    UpperBody,
    LowerBody,
    Hand,
    Foot,
    RightRing,
    LeftRing,
    Amulet,
    Weapon,
    BackWeapon,
    SideWeapon,
    Quiver,
    Shield,
    Torch,
    Tail,
    Count,
};

