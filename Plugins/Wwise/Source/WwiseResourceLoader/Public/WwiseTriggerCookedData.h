#pragma once
#include "CoreMinimal.h"
#include "WwiseTriggerCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseTriggerCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 TriggerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseTriggerCookedData();
};

