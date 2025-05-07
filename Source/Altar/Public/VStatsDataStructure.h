#pragma once
#include "CoreMinimal.h"
#include "VStatsDataStructure.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FVStatsDataStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> RowIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> TileIcon;
    
    ALTAR_API FVStatsDataStructure();
};

