#pragma once
#include "CoreMinimal.h"
#include "EVVFXType.generated.h"

UENUM()
enum class EVVFXType : int32 {
    Casting,
    Projectile,
    AreaEffect,
    HitEffect,
};

