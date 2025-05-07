#pragma once
#include "CoreMinimal.h"
#include "FVConditionOperatorType.h"
#include "VStateConditionData.h"
#include "VStateConditionDataAggregate.generated.h"

USTRUCT(BlueprintType)
struct VACTORSTATEMACHINE_API FVStateConditionDataAggregate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVConditionOperatorType AggregateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVStateConditionData> ConditionList;
    
    FVStateConditionDataAggregate();
};

