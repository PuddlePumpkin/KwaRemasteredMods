#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalSourceCookedData.h"
#include "WwiseMediaCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "WwiseGroupValueCookedData.h"
#include "WwiseSwitchContainerLeafCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseSwitchContainerLeafCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TSet<FWwiseGroupValueCookedData> GroupValueSet;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseExternalSourceCookedData> ExternalSources;
    
    FWwiseSwitchContainerLeafCookedData();
};

