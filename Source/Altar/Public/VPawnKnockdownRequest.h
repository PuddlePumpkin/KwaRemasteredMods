#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VPawnKnockdownRequest.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPawnKnockdownRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector KnockVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExplosion;
    
    FVPawnKnockdownRequest();
};

