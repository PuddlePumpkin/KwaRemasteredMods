#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FeetIKSystemData.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_UpdatePelvisOffset.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_UpdatePelvisOffset : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PelvisOffset;
    
    FRigUnit_UpdatePelvisOffset();
};

