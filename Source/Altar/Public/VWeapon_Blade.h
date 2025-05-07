#pragma once
#include "CoreMinimal.h"
#include "VWeapon_Melee.h"
#include "VWeapon_Blade.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVWeapon_Blade : public AVWeapon_Melee {
    GENERATED_BODY()
public:
    AVWeapon_Blade(const FObjectInitializer& ObjectInitializer);

};

