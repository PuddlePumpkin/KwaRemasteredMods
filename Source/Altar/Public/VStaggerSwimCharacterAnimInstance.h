#pragma once
#include "CoreMinimal.h"
#include "VStaggerCharacterAnimInstance.h"
#include "VStaggerSwim.h"
#include "VStaggerSwimCharacterAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStaggerSwimCharacterAnimInstance : public UVStaggerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LandStaggerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwimStaggerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVStaggerSwim AnimSet;
    
public:
    UVStaggerSwimCharacterAnimInstance();

};

