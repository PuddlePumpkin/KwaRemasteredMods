#pragma once
#include "CoreMinimal.h"
#include "WwiseLanguageId.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLanguageId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 LanguageId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName LanguageName;
    
    FWwiseLanguageId();
};

