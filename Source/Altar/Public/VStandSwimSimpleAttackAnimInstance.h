#pragma once
#include "CoreMinimal.h"
#include "StandSwimMeleeAttackSimple.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VStandSwimSimpleAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStandSwimSimpleAttackAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSwimMeleeAttackSimple AnimSet;
    
public:
    UVStandSwimSimpleAttackAnimInstance();

};

