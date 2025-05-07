#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VLightRig.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVLightRig : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTimeBeforeDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReachIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntensityPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallOffIntensityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLightIntensityBasedOnExposure;
    
    AVLightRig(const FObjectInitializer& ObjectInitializer);

};

