#pragma once
#include "CoreMinimal.h"
#include "VTSVector2f.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVTSVector2f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    FVTSVector2f();
};

