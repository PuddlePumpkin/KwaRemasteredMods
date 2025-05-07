#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwisePlatformId.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwisePlatformId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FGuid PlatformGuid;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName PlatformName;
    
    FWwisePlatformId();
};

