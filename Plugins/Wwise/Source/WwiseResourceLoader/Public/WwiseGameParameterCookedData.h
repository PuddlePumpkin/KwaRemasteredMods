#pragma once
#include "CoreMinimal.h"
#include "WwiseGameParameterCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseGameParameterCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ShortId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseGameParameterCookedData();
};

