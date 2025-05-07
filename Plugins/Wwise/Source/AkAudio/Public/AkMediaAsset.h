#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS()
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FString, UAkMediaAssetData*> MediaAssetDataPerPlatform;
    
public:
    UAkMediaAsset();

};

