#pragma once
#include "CoreMinimal.h"
#include "WwiseLanguageCookedData.h"
#include "WwiseAuxBusCookedData.h"
#include "WwiseLocalizedAuxBusCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLocalizedAuxBusCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TMap<FWwiseLanguageCookedData, FWwiseAuxBusCookedData> AuxBusLanguageMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 AuxBusId;
    
    FWwiseLocalizedAuxBusCookedData();
};

