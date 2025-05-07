#pragma once
#include "CoreMinimal.h"
#include "ShieldHandPoseSetup.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FShieldHandPoseSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HandPoseShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HandBlendDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandBlendTime;
    
    ALTAR_API FShieldHandPoseSetup();
};

