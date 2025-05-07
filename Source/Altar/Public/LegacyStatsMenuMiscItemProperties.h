#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuMiscItemProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyStatsMenuMiscItemProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ALTAR_API FLegacyStatsMenuMiscItemProperties();
};

