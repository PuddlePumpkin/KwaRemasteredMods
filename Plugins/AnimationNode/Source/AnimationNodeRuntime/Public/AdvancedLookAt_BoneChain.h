#pragma once
#include "CoreMinimal.h"
#include "AdvancedLookAt_ChainItem.h"
#include "AdvancedLookAt_Clamp.h"
#include "AdvancedLookAt_BoneChain.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FAdvancedLookAt_BoneChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdvancedLookAt_ChainItem> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedLookAt_Clamp BonesClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonesSpeed;
    
    FAdvancedLookAt_BoneChain();
};

