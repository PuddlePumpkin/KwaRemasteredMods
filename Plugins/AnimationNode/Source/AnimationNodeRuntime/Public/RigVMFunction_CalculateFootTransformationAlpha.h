#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RigVMCore/RigVMStruct.h"
#include "RigVMFunction_CalculateFootTransformationAlpha.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigVMFunction_CalculateFootTransformationAlpha : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorMaxDistanceToTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ALPHA;
    
    FRigVMFunction_CalculateFootTransformationAlpha();
};

