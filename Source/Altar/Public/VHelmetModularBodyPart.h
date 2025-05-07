#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VModularBodyPartBase.h"
#include "VHelmetModularBodyPart.generated.h"

class UVHelmetHeadMorphDataAsset;

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVHelmetModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldHideHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldHideHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVHelmetHeadMorphDataAsset* HeadMorphLimitsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UpscaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DownscaleMultiplier;
    
    AVHelmetModularBodyPart(const FObjectInitializer& ObjectInitializer);

};

