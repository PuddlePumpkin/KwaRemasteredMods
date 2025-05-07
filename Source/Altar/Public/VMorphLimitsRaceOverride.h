#pragma once
#include "CoreMinimal.h"
#include "VFaceMorphLimits.h"
#include "VMorphLimitsRaceOverride.generated.h"

USTRUCT(BlueprintType)
struct FVMorphLimitsRaceOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFemaleLimitsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFaceMorphLimits FemaleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMaleLimitsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFaceMorphLimits MaleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDefaultLimitsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFaceMorphLimits DefaultLimits;
    
    ALTAR_API FVMorphLimitsRaceOverride();
};

