#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModernItemEffectProperties.h"
#include "VModernAlchemyEffect.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernAlchemyEffect : public UObject {
    GENERATED_BODY()
public:
    UVModernAlchemyEffect();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FModernItemEffectProperties& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernItemEffectProperties GetProperties() const;
    
};

