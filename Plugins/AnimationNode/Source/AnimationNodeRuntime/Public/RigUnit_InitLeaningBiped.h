#pragma once
#include "CoreMinimal.h"
#include "ActorFeetIKData.h"
#include "FeetIKSystemData.h"
#include "FeetIKSystemSettings.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_InitLeaningBiped.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_InitLeaningBiped : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorFeetIKData InData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemSettings InSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemData OutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemSettings OutSettings;
    
    FRigUnit_InitLeaningBiped();
};

