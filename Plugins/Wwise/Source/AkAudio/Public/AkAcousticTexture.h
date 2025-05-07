#pragma once
#include "CoreMinimal.h"
#include "WwiseAcousticTextureCookedData.h"
#include "AkAudioType.h"
#include "AkAcousticTexture.generated.h"

UCLASS()
class AKAUDIO_API UAkAcousticTexture : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseAcousticTextureCookedData AcousticTextureCookedData;
    
    UAkAcousticTexture();

};

