#pragma once
#include "CoreMinimal.h"
#include "ResurrectionData.generated.h"

USTRUCT(BlueprintType)
struct FResurrectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetLocation;
    
    ALTAR_API FResurrectionData();
};

