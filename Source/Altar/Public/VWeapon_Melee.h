#pragma once
#include "CoreMinimal.h"
#include "VWeapon.h"
#include "VWeapon_Melee.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWeapon_Melee : public AVWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTwoHanded;
    
    AVWeapon_Melee(const FObjectInitializer& ObjectInitializer);

};

