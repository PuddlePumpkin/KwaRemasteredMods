#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseExternalSourceCookieDefaultMedia.generated.h"

USTRUCT(BlueprintType)
struct WWISESIMPLEEXTERNALSOURCE_API FWwiseExternalSourceCookieDefaultMedia : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExternalSourceCookie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ExternalSourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MediaInfoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MediaName;
    
    FWwiseExternalSourceCookieDefaultMedia();
};

