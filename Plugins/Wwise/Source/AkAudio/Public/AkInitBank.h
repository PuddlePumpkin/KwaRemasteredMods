#pragma once
#include "CoreMinimal.h"
#include "WwiseInitBankCookedData.h"
#include "AkAudioType.h"
#include "AkInitBank.generated.h"

UCLASS()
class AKAUDIO_API UAkInitBank : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FWwiseInitBankCookedData InitBankCookedData;
    
    UAkInitBank();

};

