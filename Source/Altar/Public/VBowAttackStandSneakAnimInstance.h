#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "StandSneakBowAttackAnimSet.h"
#include "VLayerCharacterAnimInstance.h"
#include "VBowAttackStandSneakAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBowAttackStandSneakAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* StartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ReleaseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSneakBowAttackAnimSet AnimSet;
    
public:
    UVBowAttackStandSneakAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSneaking() const;
    
};

