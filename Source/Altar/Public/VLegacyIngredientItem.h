#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LegacyIngredientItemProperties.h"
#include "VLegacyIngredientItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyIngredientItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyIngredientItemProperties Properties;
    
public:
    UVLegacyIngredientItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyIngredientItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyIngredientItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};

