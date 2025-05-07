#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackSingle.h"
#include "VLeftRightAttackAnimInstance.h"
#include "VSingleAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVSingleAttackAnimInstance : public UVLeftRightAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackSingle AnimSet;
    
public:
    UVSingleAttackAnimInstance();

};

