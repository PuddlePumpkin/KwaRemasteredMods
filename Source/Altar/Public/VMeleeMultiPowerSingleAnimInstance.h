#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackMultiplePowerSingle.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VMeleeMultiPowerSingleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVMeleeMultiPowerSingleAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackMultiplePowerSingle AnimSet;
    
public:
    UVMeleeMultiPowerSingleAnimInstance();

};

