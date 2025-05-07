#pragma once
#include "CoreMinimal.h"
#include "LegacyScrollbarValueProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyScrollbarValueProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpSize;
    
    ALTAR_API FLegacyScrollbarValueProperties();
};

