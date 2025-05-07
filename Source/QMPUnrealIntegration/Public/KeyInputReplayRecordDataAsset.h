#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InteractInfo.h"
#include "KeyInputReplayActorData.h"
#include "KeyInputReplayKeyData.h"
#include "KeyInputReplayRecordDataAsset.generated.h"

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UKeyInputReplayRecordDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecorded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayKeyData> KeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputReplayActorData> ActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractInfo> InteractEvents;
    
    UKeyInputReplayRecordDataAsset();

};

