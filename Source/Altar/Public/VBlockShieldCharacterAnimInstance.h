#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "VBlockCharacterAnimInstance.h"
#include "VBlockShieldCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBlockShieldCharacterAnimInstance : public UVBlockCharacterAnimInstance {
    GENERATED_BODY()
public:
    UVBlockShieldCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockShieldHitEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShield() const;
    
};

