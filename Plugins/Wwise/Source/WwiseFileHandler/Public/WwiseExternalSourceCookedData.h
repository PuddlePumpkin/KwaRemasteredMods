#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalSourceCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISEFILEHANDLER_API FWwiseExternalSourceCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 Cookie;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseExternalSourceCookedData();
};

