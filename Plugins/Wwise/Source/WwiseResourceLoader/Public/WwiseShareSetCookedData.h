#pragma once
#include "CoreMinimal.h"
#include "WwiseMediaCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "WwiseShareSetCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseShareSetCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ShareSetId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseShareSetCookedData();
};

