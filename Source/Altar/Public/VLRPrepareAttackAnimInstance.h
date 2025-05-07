#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "VLeftRightAttackAnimInstance.h"
#include "VLRPrepareAttackAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLRPrepareAttackAnimInstance : public UVLeftRightAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PrepareAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AttackLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AttackRightAnim;
    
public:
    UVLRPrepareAttackAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPrepareAttackEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

