#pragma once
#include "CoreMinimal.h"
#include "bhkConstraint.h"
#include "bhkPrismaticConstraint.generated.h"

class UbhkPrismaticConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkPrismaticConstraint : public UbhkConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkPrismaticConstraintCInfo* Constraint;
    
    UbhkPrismaticConstraint();

};

