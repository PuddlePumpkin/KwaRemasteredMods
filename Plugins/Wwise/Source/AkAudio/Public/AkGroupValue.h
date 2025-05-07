#pragma once
#include "CoreMinimal.h"
#include "WwiseGroupValueCookedData.h"
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

UCLASS(Abstract)
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseGroupValueCookedData GroupValueCookedData;
    
    UPROPERTY()
    uint32 GroupShortId;
    
    UAkGroupValue();

};

