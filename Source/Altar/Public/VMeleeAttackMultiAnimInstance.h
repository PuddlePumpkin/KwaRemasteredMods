#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackMultiple.h"
#include "VLRPrepareAttackAnimInstance.h"
#include "VMeleeAttackMultiAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVMeleeAttackMultiAnimInstance : public UVLRPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackMultiple AnimSet;
    
public:
    UVMeleeAttackMultiAnimInstance();

};

