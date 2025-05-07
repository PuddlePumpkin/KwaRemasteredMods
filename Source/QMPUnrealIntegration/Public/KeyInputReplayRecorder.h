#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractInfo.h"
#include "KeyInputActor.h"
#include "KeyInputReplayActorData.h"
#include "KeyInputReplayKeyData.h"
#include "RecordHeader.h"
#include "UIEvent.h"
#include "KeyInputReplayRecorder.generated.h"

class UInputRecordSave;
class UTextRenderComponent;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API AKeyInputReplayRecorder : public AKeyInputActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputRecordSave* RecordSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordHeader RecordHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayKeyData> KeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayActorData> ActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractInfo> InteractData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEvent> UIEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
public:
    AKeyInputReplayRecorder(const FObjectInitializer& ObjectInitializer);

};

