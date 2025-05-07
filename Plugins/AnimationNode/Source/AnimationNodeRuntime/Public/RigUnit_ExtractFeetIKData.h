#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "ActorFeetIKData.h"
#include "ActorFeetIKSettings.h"
#include "RigUnit_ExtractFeetIKData.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_ExtractFeetIKData : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorFeetIKSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorFeetIKData Data;
    
    FRigUnit_ExtractFeetIKData();
};

