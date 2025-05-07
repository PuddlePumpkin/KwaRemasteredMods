#pragma once
#include "CoreMinimal.h"
#include "AdvancedLookAt_ChainItem.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FAdvancedLookAt_ChainItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneRatioInChain;
    
    FAdvancedLookAt_ChainItem();
};

