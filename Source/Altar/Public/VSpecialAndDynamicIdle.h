#pragma once
#include "CoreMinimal.h"
#include "VSpecialAndDynamicIdle.generated.h"

USTRUCT(BlueprintType)
struct FVSpecialAndDynamicIdle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpperBodyBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperBodyBlendDepth;
    
    ALTAR_API FVSpecialAndDynamicIdle();
};

