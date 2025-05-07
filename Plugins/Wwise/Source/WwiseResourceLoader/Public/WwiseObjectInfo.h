#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwiseObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid WwiseGuid;
    
    UPROPERTY(EditAnywhere)
    uint32 WwiseShortId;
    
    UPROPERTY(EditAnywhere)
    FName WwiseName;
    
    UPROPERTY(EditAnywhere)
    uint32 HardCodedSoundBankShortId;
    
    FWwiseObjectInfo();
};

