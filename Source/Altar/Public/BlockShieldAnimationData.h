#pragma once
#include "CoreMinimal.h"
#include "BlockShieldAnimationData.generated.h"

class UAnimMontage;
class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FBlockShieldAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BlockIdleSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BlockHitSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BlockShieldSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BlockShieldHitSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BlockShieldBashMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* AimOffsetBlendSpace;
    
    ALTAR_API FBlockShieldAnimationData();
};

