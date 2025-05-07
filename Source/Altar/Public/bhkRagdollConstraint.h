#pragma once
#include "CoreMinimal.h"
#include "bhkConstraint.h"
#include "bhkRagdollConstraint.generated.h"

class UbhkRagdollConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkRagdollConstraint : public UbhkConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkRagdollConstraintCInfo* Constraint;
    
    UbhkRagdollConstraint();

};

