#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VRecoilCharacterAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVRecoilCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RecoilMontage;
    
public:
    UVRecoilCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
};

