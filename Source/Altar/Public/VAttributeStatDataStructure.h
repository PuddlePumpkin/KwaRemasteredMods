#pragma once
#include "CoreMinimal.h"
#include "EAttributeStat.h"
#include "VStatsDataStructure.h"
#include "VAttributeStatDataStructure.generated.h"

USTRUCT(BlueprintType)
struct FVAttributeStatDataStructure : public FVStatsDataStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeStat Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    ALTAR_API FVAttributeStatDataStructure();
};

