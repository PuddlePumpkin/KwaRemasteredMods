#pragma once
#include "CoreMinimal.h"
#include "EResistStat.h"
#include "VStatsDataStructure.h"
#include "VResistStatDataStructure.generated.h"

USTRUCT(BlueprintType)
struct FVResistStatDataStructure : public FVStatsDataStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResistStat Type;
    
    ALTAR_API FVResistStatDataStructure();
};

