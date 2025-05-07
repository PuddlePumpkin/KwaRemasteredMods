#pragma once
#include "CoreMinimal.h"
#include "ImageCorrectionData.h"
#include "ButtonCorrectionData.generated.h"

USTRUCT(BlueprintType)
struct FButtonCorrectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCorrectionData base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCorrectionData Hovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCorrectionData Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCorrectionData Disabled;
    
    ALTAR_API FButtonCorrectionData();
};

