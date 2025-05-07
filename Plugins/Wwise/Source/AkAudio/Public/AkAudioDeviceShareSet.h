#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioDeviceShareSetCookedData.h"
#include "AkAudioType.h"
#include "AkAudioDeviceShareSet.generated.h"

UCLASS()
class AKAUDIO_API UAkAudioDeviceShareSet : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseAudioDeviceShareSetCookedData AudioDeviceShareSetCookedData;
    
    UAkAudioDeviceShareSet();

};

