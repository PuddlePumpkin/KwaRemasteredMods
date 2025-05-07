#pragma once
#include "CoreMinimal.h"
#include "bhkConstraint.h"
#include "bhkLimitedHingeConstraint.generated.h"

class UbhkLimitedHingeConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkLimitedHingeConstraint : public UbhkConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkLimitedHingeConstraintCInfo* Constraint;
    
    UbhkLimitedHingeConstraint();

};

