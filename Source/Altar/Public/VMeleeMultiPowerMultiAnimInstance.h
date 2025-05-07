#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackMultiplePowerMultiple.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VMeleeMultiPowerMultiAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVMeleeMultiPowerMultiAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackMultiplePowerMultiple AnimSet;
    
public:
    UVMeleeMultiPowerMultiAnimInstance();

};

