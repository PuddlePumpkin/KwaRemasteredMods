#pragma once
#include "CoreMinimal.h"
#include "bhkConstraint.h"
#include "bhkStiffSpringConstraint.generated.h"

class UbhkStiffSpringConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkStiffSpringConstraint : public UbhkConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkStiffSpringConstraintCInfo* Constraint;
    
    UbhkStiffSpringConstraint();

};

