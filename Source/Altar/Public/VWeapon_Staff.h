#pragma once
#include "CoreMinimal.h"
#include "VWeapon.h"
#include "VWeapon_Staff.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWeapon_Staff : public AVWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainStaticMeshComponent;
    
    AVWeapon_Staff(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChargeUp();
    
};

