#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FeetIKSystemData.h"
#include "FeetIKSystemSettings.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_GetSpineTargetOffsetRotations.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_GetSpineTargetOffsetRotations : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuat> TargetOffsetRotations;
    
    FRigUnit_GetSpineTargetOffsetRotations();
};

