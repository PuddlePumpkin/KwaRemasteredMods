#pragma once
#include "CoreMinimal.h"
#include "StandSwimMeleeAttackMultiplePowerSingle.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VStandSwimMultiPowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStandSwimMultiPowerAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSwimMeleeAttackMultiplePowerSingle AnimSet;
    
public:
    UVStandSwimMultiPowerAnimInstance();

};

