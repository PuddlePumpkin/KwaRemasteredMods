#pragma once
#include "CoreMinimal.h"
#include "bhkSerializable.h"
#include "bhkConstraint.generated.h"

class UbhkConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkConstraint : public UbhkSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkConstraintCInfo* ConstraintInfo;
    
    UbhkConstraint();

};

