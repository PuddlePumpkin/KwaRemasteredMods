#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "PlaybackManager.h"
#include "UIPhasesArray.h"
#include "UIManager.generated.h"

class UUIPhase;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UUIManager : public UPlaybackManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUIPhasesArray> UIPhasesByType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPhase* CurrentUIPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPhase* MainRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EventWaitingHandle;
    
public:
    UUIManager();

};

