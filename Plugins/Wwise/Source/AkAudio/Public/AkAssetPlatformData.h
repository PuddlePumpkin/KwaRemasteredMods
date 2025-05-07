#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkAssetPlatformData.generated.h"

class UAkAssetData;

UCLASS()
class AKAUDIO_API UAkAssetPlatformData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAkAssetData* CurrentAssetData;
    
public:
    UAkAssetPlatformData();

};

