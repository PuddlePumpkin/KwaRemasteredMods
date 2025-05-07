#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_AdvancedLookAt_Override.generated.h"

class UAdvancedLookAtSettings;

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FAnimNode_AdvancedLookAt_Override : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAdvancedLookAtSettings* LookAtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Target;
    
    FAnimNode_AdvancedLookAt_Override();
};

