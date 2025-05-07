#pragma once
#include "CoreMinimal.h"
#include "GetUpAnimationData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VGetUpAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVGetUpAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGettingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadSocketName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUpAnimationData LayerData;
    
    UVGetUpAnimInstance();

};

