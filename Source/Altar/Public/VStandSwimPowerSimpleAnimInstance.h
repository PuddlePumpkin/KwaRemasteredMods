#pragma once
#include "CoreMinimal.h"
#include "StandSwimMeleeAttackPowerSingleSimple.h"
#include "VMeleeAttackAnimInstance.h"
#include "VStandSwimPowerSimpleAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStandSwimPowerSimpleAnimInstance : public UVMeleeAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSwimMeleeAttackPowerSingleSimple AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleAnim;
    
public:
    UVStandSwimPowerSimpleAnimInstance();

};

