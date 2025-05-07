#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RigUnit_MathLibraryBase.h"
#include "RigUnit_GetReflectionVector.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_GetReflectionVector : public FRigUnit_MathLibraryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SurfaceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OutVector;
    
    FRigUnit_GetReflectionVector();
};

