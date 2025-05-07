#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiBound.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FNiBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FNiBound();
};

