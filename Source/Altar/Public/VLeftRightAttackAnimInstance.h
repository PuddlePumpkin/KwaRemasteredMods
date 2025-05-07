#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "VMeleeAttackAnimInstance.h"
#include "VLeftRightAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLeftRightAttackAnimInstance : public UVMeleeAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnterLightAttackRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnterLightAttackLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnterPrepareAttack;
    
public:
    UVLeftRightAttackAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

