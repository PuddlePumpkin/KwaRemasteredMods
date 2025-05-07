#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VInstancerRemoveData.generated.h"

USTRUCT(BlueprintType)
struct FVInstancerRemoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Indexes;
    
    ALTAR_API FVInstancerRemoveData();
};

