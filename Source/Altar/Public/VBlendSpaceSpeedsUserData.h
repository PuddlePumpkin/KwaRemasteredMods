#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "VBlendSpaceSpeedsUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVBlendSpaceSpeedsUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SlowestAnimSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FastestAnimSpeeds;
    
    UVBlendSpaceSpeedsUserData();

};

