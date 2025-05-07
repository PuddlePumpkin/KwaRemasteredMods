#pragma once
#include "CoreMinimal.h"
#include "VATMRecordingFrameMoon.h"
#include "VATMRecordingFrameStars.h"
#include "VATMRecordingFrameSun.h"
#include "VATMRecordingFrame.generated.h"

USTRUCT(BlueprintType)
struct FVATMRecordingFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVATMRecordingFrameMoon Moon[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVATMRecordingFrameStars Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVATMRecordingFrameSun Sun;
    
    ALTAR_API FVATMRecordingFrame();
};

