#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "FacialAnimationBlendUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UFacialAnimationBlendUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrame;
    
    UFacialAnimationBlendUserData();

};

