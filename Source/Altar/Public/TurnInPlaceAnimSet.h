#pragma once
#include "CoreMinimal.h"
#include "TurnInPlaceAnimSet.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FTurnInPlaceAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TurnLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TurnRight;
    
    ALTAR_API FTurnInPlaceAnimSet();
};

