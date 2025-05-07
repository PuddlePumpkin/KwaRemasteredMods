#pragma once
#include "CoreMinimal.h"
#include "WwiseLocalizedAuxBusCookedData.h"
#include "AkAudioType.h"
#include "AkAuxBus.generated.h"

class UAkAudioBank;

UCLASS()
class AKAUDIO_API UAkAuxBus : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float MaxAttenuationRadius;
    
    UPROPERTY(EditAnywhere, Transient)
    FWwiseLocalizedAuxBusCookedData AuxBusCookedData;
    
    UPROPERTY()
    UAkAudioBank* RequiredBank;
    
    UAkAuxBus();

};

