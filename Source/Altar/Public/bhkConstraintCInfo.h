#pragma once
#include "CoreMinimal.h"
#include "ConstraintPriority.h"
#include "NifType.h"
#include "bhkConstraintCInfo.generated.h"

class UbhkEntity;

UCLASS(Blueprintable)
class ALTAR_API UbhkConstraintCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumEntities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkEntity* EntityA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkEntity* EntityB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ConstraintPriority Priority;
    
    UbhkConstraintCInfo();

};

