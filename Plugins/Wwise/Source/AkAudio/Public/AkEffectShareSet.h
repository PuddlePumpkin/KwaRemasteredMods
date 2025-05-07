#pragma once
#include "CoreMinimal.h"
#include "WwiseLocalizedShareSetCookedData.h"
#include "AkAudioType.h"
#include "AkEffectShareSet.generated.h"

UCLASS()
class AKAUDIO_API UAkEffectShareSet : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseLocalizedShareSetCookedData ShareSetCookedData;
    
    UAkEffectShareSet();

};

