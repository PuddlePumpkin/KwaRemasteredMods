#pragma once
#include "CoreMinimal.h"
#include "TexturingFlags.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FTexturingFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FTexturingFlags();
};

