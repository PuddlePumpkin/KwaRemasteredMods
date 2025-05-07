#pragma once
#include "CoreMinimal.h"
#include "VBowAttack.generated.h"

class UAnimSequenceBase;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FVBowAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Release;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* AimOffsetBlendSpace;
    
    ALTAR_API FVBowAttack();
};

