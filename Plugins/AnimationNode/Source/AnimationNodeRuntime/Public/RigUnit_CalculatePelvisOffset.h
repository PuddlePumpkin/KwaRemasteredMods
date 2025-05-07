#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FeetIKSystemData.h"
#include "FeetIKSystemSettings.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_CalculatePelvisOffset.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_CalculatePelvisOffset : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PelvisOffset;
    
    FRigUnit_CalculatePelvisOffset();
};

