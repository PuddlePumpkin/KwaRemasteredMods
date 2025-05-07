#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VFaceMorphLimits.h"
#include "VMorphLimitsRaceOverride.h"
#include "VHelmetHeadMorphDataAsset.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVHelmetHeadMorphDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFaceMorphLimits DefaultLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVMorphLimitsRaceOverride> LimitsOverridePerRace;
    
    UVHelmetHeadMorphDataAsset();

};

