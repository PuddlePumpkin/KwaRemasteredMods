#pragma once
#include "CoreMinimal.h"
#include "EVActionType.generated.h"

UENUM(BlueprintType)
enum class EVActionType : uint8 {
    PowerAttack,
    RightAttack,
    LeftAttack,
    PowerAttackForward,
    PowerAttackBack,
    PowerAttackRight,
    PowerAttackLeft,
    BowDraw,
    BowShoot,
    DrawWeapon,
    PrepareAttack,
    Block,
    Jump,
    BlockHit,
    Recoil,
    Stagger,
    SpellCasting,
    DodgeForward,
    DodgeBack,
    DodgeRight,
    DodgeLeft,
};

