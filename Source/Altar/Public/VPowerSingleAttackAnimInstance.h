#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackPowerSingle.h"
#include "VLeftRightAttackAnimInstance.h"
#include "VPowerSingleAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVPowerSingleAttackAnimInstance : public UVLeftRightAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackPowerSingle AnimSet;
    
public:
    UVPowerSingleAttackAnimInstance();

};

