#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FeetIKSystemData.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_UpdateUpperBodyBoneOffsetRotation.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_UpdateUpperBodyBoneOffsetRotation : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat NewOffset;
    
    FRigUnit_UpdateUpperBodyBoneOffsetRotation();
};

