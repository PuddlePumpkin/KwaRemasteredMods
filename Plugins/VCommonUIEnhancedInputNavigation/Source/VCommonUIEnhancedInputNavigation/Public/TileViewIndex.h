#pragma once
#include "CoreMinimal.h"
#include "TileViewIndex.generated.h"

USTRUCT(BlueprintType)
struct FTileViewIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnIndex;
    
    VCOMMONUIENHANCEDINPUTNAVIGATION_API FTileViewIndex();
};

