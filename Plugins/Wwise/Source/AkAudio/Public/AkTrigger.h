#pragma once
#include "CoreMinimal.h"
#include "WwiseTriggerCookedData.h"
#include "AkAudioType.h"
#include "AkTrigger.generated.h"

UCLASS()
class AKAUDIO_API UAkTrigger : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseTriggerCookedData TriggerCookedData;
    
    UAkTrigger();

};

