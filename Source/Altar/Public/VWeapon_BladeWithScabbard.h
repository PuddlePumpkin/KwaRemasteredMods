#pragma once
#include "CoreMinimal.h"
#include "VWeapon_Blade.h"
#include "VWeapon_BladeWithScabbard.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWeapon_BladeWithScabbard : public AVWeapon_Blade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScabbardMeshComponent;
    
    AVWeapon_BladeWithScabbard(const FObjectInitializer& ObjectInitializer);

};

