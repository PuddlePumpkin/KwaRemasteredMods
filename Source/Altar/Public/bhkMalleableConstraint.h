#pragma once
#include "CoreMinimal.h"
#include "bhkConstraint.h"
#include "bhkMalleableConstraint.generated.h"

class UbhkMalleableConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkMalleableConstraint : public UbhkConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkMalleableConstraintCInfo* MalleableConstraint;
    
    UbhkMalleableConstraint();

};

