#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "VMeleeAttackAnimInstance.h"
#include "VPrepareAttackAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVPrepareAttackAnimInstance : public UVMeleeAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PrepareAttackAnim;
    
public:
    UVPrepareAttackAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPrepareAttackEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

