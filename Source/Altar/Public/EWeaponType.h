#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
    BladeOneHand,
    BladeTwoHand,
    BluntOneHand,
    BluntTwoHand,
    Staff,
    Marksman_Bow,
    Type_Count,
};

