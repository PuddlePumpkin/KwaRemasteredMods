#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "InputCoreTypes.h"
#include "ActorEventInfo.h"
#include "KeyInputActor.h"
#include "RecordHeader.h"
#include "PlaybackTraversal.generated.h"

class UInputRecordSave;
class UObject;
class UPlaybackManager;
class URecordData;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API APlaybackTraversal : public AKeyInputActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordHeader RecordHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputRecordSave* LastRecordSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorEventInfo> ActorEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URecordData* MainRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URecordData* PrioritaryRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlaybackManager*> Managers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> WaitForManagerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorEventInfo> ResolvedActorEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EventWaitingHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> PressedButtonsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeoutHandle;
    
public:
    APlaybackTraversal(const FObjectInitializer& ObjectInitializer);

};

