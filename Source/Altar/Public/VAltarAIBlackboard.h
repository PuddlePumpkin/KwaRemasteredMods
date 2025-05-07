#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "VAltarAIBlackboard.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarAIBlackboard : public UObject {
    GENERATED_BODY()
public:
    UVAltarAIBlackboard();

    UFUNCTION(BlueprintCallable)
    void SetScalarValue(FGameplayTag Tag, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ReadScalarValue(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValue(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearValue(FGameplayTag Tag);
    
};

