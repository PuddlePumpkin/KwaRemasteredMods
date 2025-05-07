#pragma once
#include "CoreMinimal.h"
#include "VATMRecordingFrame.h"
#include "VATMRecordingFrameArray.generated.h"

USTRUCT(BlueprintType)
struct FVATMRecordingFrameArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVATMRecordingFrame> Frames;
    
    ALTAR_API FVATMRecordingFrameArray();
};

