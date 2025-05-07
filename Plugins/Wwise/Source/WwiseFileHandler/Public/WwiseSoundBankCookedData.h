#pragma once
#include "CoreMinimal.h"
#include "EWwiseSoundBankType.h"
#include "WwiseSoundBankCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISEFILEHANDLER_API FWwiseSoundBankCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 SoundBankId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName SoundBankPathName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 MemoryAlignment;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bDeviceMemory;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bContainsMedia;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EWwiseSoundBankType SoundBankType;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseSoundBankCookedData();
};

