#pragma once
#include "CoreMinimal.h"
#include "bhkConstraint.h"
#include "bhkHingeConstraint.generated.h"

class UbhkHingeConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkHingeConstraint : public UbhkConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkHingeConstraintCInfo* Constraint;
    
    UbhkHingeConstraint();

};

