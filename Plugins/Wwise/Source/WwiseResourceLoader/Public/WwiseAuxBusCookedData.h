#pragma once
#include "CoreMinimal.h"
#include "WwiseMediaCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "WwiseAuxBusCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAuxBusCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 AuxBusId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseAuxBusCookedData();
};

