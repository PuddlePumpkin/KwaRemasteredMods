#pragma once
#include "CoreMinimal.h"
#include "WwiseLanguageCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "WwiseLocalizedSoundBankCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLocalizedSoundBankCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TMap<FWwiseLanguageCookedData, FWwiseSoundBankCookedData> SoundBankLanguageMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 SoundBankId;
    
    FWwiseLocalizedSoundBankCookedData();
};

