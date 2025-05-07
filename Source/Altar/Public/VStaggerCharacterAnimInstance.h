#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VStaggerCharacterAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStaggerCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayStaggerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StaggerMontage;
    
public:
    UVStaggerCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
};

