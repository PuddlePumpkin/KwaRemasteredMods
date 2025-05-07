#pragma once
#include "CoreMinimal.h"
#include "WwiseLanguageCookedData.h"
#include "WwiseMediaCookedData.h"
#include "WwiseSoundBankCookedData.h"
#include "WwiseInitBankCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseInitBankCookedData : public FWwiseSoundBankCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FWwiseLanguageCookedData> Language;
    
    FWwiseInitBankCookedData();
};

