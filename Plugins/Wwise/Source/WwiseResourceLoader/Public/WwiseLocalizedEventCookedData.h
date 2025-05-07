#pragma once
#include "CoreMinimal.h"
#include "WwiseLanguageCookedData.h"
#include "WwiseEventCookedData.h"
#include "WwiseLocalizedEventCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLocalizedEventCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TMap<FWwiseLanguageCookedData, FWwiseEventCookedData> EventLanguageMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 EventId;
    
    FWwiseLocalizedEventCookedData();
};

