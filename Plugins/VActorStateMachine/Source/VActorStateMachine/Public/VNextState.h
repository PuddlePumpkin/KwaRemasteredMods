#pragma once
#include "CoreMinimal.h"
#include "FVExtendedConditionType.h"
#include "Templates/SubclassOf.h"
#include "VStateConditionDataAggregate.h"
#include "VNextState.generated.h"

class UVStateBase;

USTRUCT(BlueprintType)
struct VACTORSTATEMACHINE_API FVNextState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVStateBase> TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVExtendedConditionType ExtendedConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVStateConditionDataAggregate ExtendedConditionAggregate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStateBase* TargetStateInstance;
    
    FVNextState();
};

