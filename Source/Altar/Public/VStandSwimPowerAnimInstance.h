#pragma once
#include "CoreMinimal.h"
#include "StandSwimMeleeAttackPowerSingle.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VStandSwimPowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStandSwimPowerAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSwimMeleeAttackPowerSingle AnimSet;
    
public:
    UVStandSwimPowerAnimInstance();

};

