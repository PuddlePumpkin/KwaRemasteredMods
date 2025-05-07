#pragma once
#include "CoreMinimal.h"
#include "VWeapon_Melee.h"
#include "VWeapon_Blunt.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVWeapon_Blunt : public AVWeapon_Melee {
    GENERATED_BODY()
public:
    AVWeapon_Blunt(const FObjectInitializer& ObjectInitializer);

};

