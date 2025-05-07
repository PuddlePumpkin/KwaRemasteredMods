#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkAudioBank.generated.h"

UCLASS()
class AKAUDIO_API UAkAudioBank : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool AutoLoad;
    
    UAkAudioBank();

};

