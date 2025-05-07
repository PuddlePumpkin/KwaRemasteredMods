#pragma once
#include "CoreMinimal.h"
#include "StandSneakMultiplePowerSingle.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VStandSneakMultiPowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStandSneakMultiPowerAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSneakMultiplePowerSingle AnimSet;
    
public:
    UVStandSneakMultiPowerAnimInstance();

};

