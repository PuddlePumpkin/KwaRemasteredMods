#pragma once
#include "CoreMinimal.h"
#include "VWeapon.h"
#include "VWeapon_Bow.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWeapon_Bow : public AVWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSkeletalMeshComponent;
    
    AVWeapon_Bow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDraw();
    
};

