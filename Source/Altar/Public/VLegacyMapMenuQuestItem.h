#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LegacyMapMenuQuestProperties.h"
#include "VLegacyMapMenuQuestItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyMapMenuQuestItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacyMapMenuQuestItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyMapMenuQuestProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMapMenuQuestProperties GetProperties() const;
    
};

