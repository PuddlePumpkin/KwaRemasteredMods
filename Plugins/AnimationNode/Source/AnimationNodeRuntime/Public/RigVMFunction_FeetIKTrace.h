#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RigVMCore/RigVMStruct.h"
#include "RigVMFunction_FeetIKTrace.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigVMFunction_FeetIKTrace : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitNormal;
    
    FRigVMFunction_FeetIKTrace();
};

