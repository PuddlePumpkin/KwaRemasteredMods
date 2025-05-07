#pragma once
#include "CoreMinimal.h"
#include "VRecoilCharacterAnimInstance.h"
#include "VStandSwimRecoil.h"
#include "VRecoilStandSwimCharacterAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVRecoilStandSwimCharacterAnimInstance : public UVRecoilCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LandRecoilMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwimRecoilMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LandIdleBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SwimIdleBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVStandSwimRecoil AnimSet;
    
public:
    UVRecoilStandSwimCharacterAnimInstance();

};

