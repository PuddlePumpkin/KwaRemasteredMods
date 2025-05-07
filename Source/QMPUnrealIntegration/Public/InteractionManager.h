#pragma once
#include "CoreMinimal.h"
#include "InteractInfo.h"
#include "PlaybackManager.h"
#include "InteractionManager.generated.h"

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UInteractionManager : public UPlaybackManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractInfo> InteractEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractInfo CurrentInteractInfo;
    
public:
    UInteractionManager();

};

