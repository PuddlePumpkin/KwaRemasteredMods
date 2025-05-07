#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VMeleeAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVMeleeAttackAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatStateMachineName;
    
public:
    UVMeleeAttackAnimInstance();

};

