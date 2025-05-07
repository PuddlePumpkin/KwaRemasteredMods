#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "LimbBoneSettings.h"
#include "LimbSettings.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FLimbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLimbBoneSettings> LimbBonesSettings;
    
    FLimbSettings();
};

