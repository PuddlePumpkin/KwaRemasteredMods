#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "GameplayTagContainer.h"
#include "VLayerCharacterAnimInstance.h"
#include "VBaseStaffAttackAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBaseStaffAttackAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AttackAnim;
    
public:
    UVBaseStaffAttackAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

