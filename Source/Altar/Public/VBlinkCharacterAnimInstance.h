#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstance.h"
#include "VBlinkCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBlinkCharacterAnimInstance : public UVBaseCharacterAnimInstance {
    GENERATED_BODY()
public:
    UVBlinkCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSleeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlinking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlinkProgress() const;
    
};

