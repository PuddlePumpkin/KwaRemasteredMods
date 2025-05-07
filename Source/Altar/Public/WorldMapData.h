#pragma once
#include "CoreMinimal.h"
#include "WorldMapData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FWorldMapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UsableWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UsableHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NWCellX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NWCellY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SECellX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SECellY;
    
    FWorldMapData();
};

