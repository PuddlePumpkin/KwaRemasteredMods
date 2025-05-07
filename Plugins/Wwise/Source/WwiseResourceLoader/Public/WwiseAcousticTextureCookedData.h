#pragma once
#include "CoreMinimal.h"
#include "WwiseAcousticTextureCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAcousticTextureCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float AbsorptionLow;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float AbsorptionMidLow;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float AbsorptionMidHigh;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float AbsorptionHigh;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ShortId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseAcousticTextureCookedData();
};

