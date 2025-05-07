#pragma once
#include "CoreMinimal.h"
#include "WedgeData.h"
#include "VPersuasionMiniGameButtonData.generated.h"

USTRUCT(BlueprintType)
struct FVPersuasionMiniGameButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWedgeData WedgeData;
    
    ALTAR_API FVPersuasionMiniGameButtonData();
};

