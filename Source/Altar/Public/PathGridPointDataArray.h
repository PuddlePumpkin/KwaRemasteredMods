#pragma once
#include "CoreMinimal.h"
#include "PathGridPointData.h"
#include "PathGridPointDataArray.generated.h"

USTRUCT(BlueprintType)
struct FPathGridPointDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathGridPointData> Array;
    
    ALTAR_API FPathGridPointDataArray();
};

