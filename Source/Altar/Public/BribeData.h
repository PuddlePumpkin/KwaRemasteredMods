#pragma once
#include "CoreMinimal.h"
#include "BribeData.generated.h"

USTRUCT(BlueprintType)
struct FBribeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BribeGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BribeDisposition;
    
    ALTAR_API FBribeData();
};

