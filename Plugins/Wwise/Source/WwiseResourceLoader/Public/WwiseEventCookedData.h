#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalSourceCookedData.h"
#include "WwiseMediaCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "EWwiseEventDestroyOptions.h"
#include "WwiseGroupValueCookedData.h"
#include "WwiseSwitchContainerLeafCookedData.h"
#include "WwiseEventCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseEventCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 EventId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseExternalSourceCookedData> ExternalSources;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseSwitchContainerLeafCookedData> SwitchContainerLeaves;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TSet<FWwiseGroupValueCookedData> RequiredGroupValueSet;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EWwiseEventDestroyOptions DestroyOptions;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseEventCookedData();
};

