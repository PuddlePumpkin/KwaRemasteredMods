#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CalculatePelvisOffset.h"
#include "RigUnit_CalculateHumanoidPelvisOffset.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_CalculateHumanoidPelvisOffset : public FRigUnit_CalculatePelvisOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSneaking;
    
    FRigUnit_CalculateHumanoidPelvisOffset();
};

