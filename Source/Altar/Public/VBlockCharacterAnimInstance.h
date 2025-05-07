#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "BlockShieldAnimationData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VBlockCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBlockCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingBlockHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnterBlockState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockShieldAnimationData AnimSet;
    
public:
    UVBlockCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockHitEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockHitEnd(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockingHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldEnterBlockState() const;
    
};

