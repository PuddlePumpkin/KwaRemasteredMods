#pragma once
#include "CoreMinimal.h"
#include "TimeControllerFlags.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FTimeControllerFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FTimeControllerFlags();
};

