#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ATMBiomeInfluencer.h"
#include "ATMBiomeVolume.generated.h"

class UATMBiomePreset;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API AATMBiomeVolume : public AVolume, public IATMBiomeInfluencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMBiomePreset* Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedWeight;
    
public:
    AATMBiomeVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

