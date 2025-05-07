#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ActorEventInfo.h"
#include "InteractInfo.h"
#include "KeyInputReplayActorData.h"
#include "KeyInputReplayKeyData.h"
#include "SyncEventInfo.h"
#include "UIEvent.h"
#include "InputRecordSave.generated.h"

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UInputRecordSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayKeyData> KeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEvent> UIEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayActorData> ActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncEventInfo> SyncEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractInfo> InteractEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorEventInfo> ActorEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGodModeAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UInputRecordSave();

};

