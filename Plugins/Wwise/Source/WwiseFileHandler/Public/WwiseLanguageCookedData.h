#pragma once
#include "CoreMinimal.h"
#include "EWwiseLanguageRequirement.h"
#include "WwiseLanguageCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISEFILEHANDLER_API FWwiseLanguageCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 LanguageId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName LanguageName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EWwiseLanguageRequirement LanguageRequirement;
    
    FWwiseLanguageCookedData();
};
FORCEINLINE uint32 GetTypeHash(const FWwiseLanguageCookedData) { return 0; }

