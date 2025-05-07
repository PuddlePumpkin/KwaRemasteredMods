#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiParticlesData.h"
#include "NiPSysData.generated.h"

class UNiParticleInfo;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysData : public UNiParticlesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiParticleInfo*> ParticleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UnknownVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasRotationSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RotationSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAddedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddedParticlesBase;
    
    UNiPSysData();

};

