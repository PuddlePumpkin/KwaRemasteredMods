#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioDeviceShareSetCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAudioDeviceShareSetCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ShortId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseAudioDeviceShareSetCookedData();
};

