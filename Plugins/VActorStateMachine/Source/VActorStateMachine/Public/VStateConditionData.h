#pragma once
#include "CoreMinimal.h"
#include "VStateConditionData.generated.h"

class UVStateCondition;

USTRUCT(BlueprintType)
struct VACTORSTATEMACHINE_API FVStateConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVStateCondition* Condition;
    
    FVStateConditionData();
};

