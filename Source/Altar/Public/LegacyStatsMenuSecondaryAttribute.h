#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuSecondaryAttribute.generated.h"

USTRUCT(BlueprintType)
struct FLegacyStatsMenuSecondaryAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 base;
    
    ALTAR_API FLegacyStatsMenuSecondaryAttribute();
};

