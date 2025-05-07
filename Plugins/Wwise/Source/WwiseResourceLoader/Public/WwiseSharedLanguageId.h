#pragma once
#include "CoreMinimal.h"
#include "EWwiseLanguageRequirement.h"
#include "WwiseSharedLanguageId.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseSharedLanguageId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EWwiseLanguageRequirement LanguageRequirement;
    
    FWwiseSharedLanguageId();
};

