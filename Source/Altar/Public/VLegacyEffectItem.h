#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LegacyAddedEffectItemProperties.h"
#include "VLegacyEffectItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyEffectItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyAddedEffectItemProperties Properties;
    
public:
    UVLegacyEffectItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyAddedEffectItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyAddedEffectItemProperties GetProperties() const;
    
};

