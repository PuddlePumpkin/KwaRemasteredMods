#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Animation/AnimTypes.h"
#include "ActorBlinkSettings.h"
#include "AnimNode_Blink.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FAnimNode_Blink : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBlinkSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeValue;
    
    FAnimNode_Blink();
};

