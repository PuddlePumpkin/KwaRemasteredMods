#pragma once
#include "CoreMinimal.h"
#include "WwiseMediaCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISEFILEHANDLER_API FWwiseMediaCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 MediaId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName MediaPathName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 PrefetchSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 MemoryAlignment;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bDeviceMemory;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bStreaming;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseMediaCookedData();
};

