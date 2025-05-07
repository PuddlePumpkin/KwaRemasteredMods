#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceWwiseEvent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, EditInlineNew)
class WWISENIAGARA_API UNiagaraDataInterfaceWwiseEvent : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventToPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkRtpc*> GameParameters;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitPostsPerTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPostsPerTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenComponentIsDestroyed;
    
    UNiagaraDataInterfaceWwiseEvent();

};

