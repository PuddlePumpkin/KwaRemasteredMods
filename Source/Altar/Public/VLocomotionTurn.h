#pragma once
#include "CoreMinimal.h"
#include "VLocomotionTurn.generated.h"

class UAnimSequenceBase;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FVLocomotionTurn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace_Moving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Turn_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Turn_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace_Turning;
    
    ALTAR_API FVLocomotionTurn();
};

