#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RigUnit_MathLibraryBase.h"
#include "RigUnit_ProjectVectorOntoVector.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_ProjectVectorOntoVector : public FRigUnit_MathLibraryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OutVector;
    
    FRigUnit_ProjectVectorOntoVector();
};

