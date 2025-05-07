#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_AdvancedLookAt.generated.h"

class UAdvancedLookAtSettings;

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FAnimNode_AdvancedLookAt : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAdvancedLookAtSettings* LookAtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSitting;
    
    FAnimNode_AdvancedLookAt();
};

