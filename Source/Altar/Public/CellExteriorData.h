#pragma once
#include "CoreMinimal.h"
#include "CellExteriorData.generated.h"

USTRUCT(BlueprintType)
struct FCellExteriorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellY;
    
    ALTAR_API FCellExteriorData();
};

