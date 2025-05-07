#pragma once
#include "CoreMinimal.h"
#include "LegacyMapMenuTitleProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyMapMenuTitleProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Date;
    
    ALTAR_API FLegacyMapMenuTitleProperties();
};

