#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VLookAtAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLookAtAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommandEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLookAt;
    
public:
    UVLookAtAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSitting() const;
    
};

