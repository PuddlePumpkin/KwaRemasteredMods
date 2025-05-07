#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "FeetIKSystemSettings.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_InitSpineRotationAlphas.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_InitSpineRotationAlphas : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    FRigUnit_InitSpineRotationAlphas();
};

