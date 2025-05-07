#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VModernEnchantmentItemProperties.h"
#include "VModernEnchantmentItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernEnchantmentItem : public UObject {
    GENERATED_BODY()
public:
    UVModernEnchantmentItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FVModernEnchantmentItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVModernEnchantmentItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};

