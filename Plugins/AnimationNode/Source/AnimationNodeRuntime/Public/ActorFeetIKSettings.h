#pragma once
#include "CoreMinimal.h"
#include "ActorFeetIKSettings.generated.h"

class UActorFeetIKDataAsset;

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FActorFeetIKSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorFeetIKDataAsset* DataAsset;
    
    FActorFeetIKSettings();
};

