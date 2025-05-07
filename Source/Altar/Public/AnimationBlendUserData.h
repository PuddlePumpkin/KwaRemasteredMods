#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "AnimationBlendUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UAnimationBlendUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendFrame;
    
    UAnimationBlendUserData();

};

