#pragma once
#include "CoreMinimal.h"
#include "WwiseGameParameterCookedData.h"
#include "AkAudioType.h"
#include "AkRtpc.generated.h"

UCLASS()
class AKAUDIO_API UAkRtpc : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseGameParameterCookedData GameParameterCookedData;
    
    UAkRtpc();

};

