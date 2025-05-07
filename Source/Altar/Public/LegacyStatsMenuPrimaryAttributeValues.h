#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuPrimaryAttributeValues.generated.h"

USTRUCT(BlueprintType)
struct FLegacyStatsMenuPrimaryAttributeValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    ALTAR_API FLegacyStatsMenuPrimaryAttributeValues();
};

