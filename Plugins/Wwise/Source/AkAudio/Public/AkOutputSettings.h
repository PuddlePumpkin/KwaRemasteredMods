#pragma once
#include "CoreMinimal.h"
#include "AkChannelConfiguration.h"
#include "PanningRule.h"
#include "AkOutputSettings.generated.h"

class UAkAudioDeviceShareSet;

USTRUCT(BlueprintType)
struct FAkOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioDeviceShareSet* AudioDeviceShareSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IdDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    PanningRule PanRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AkChannelConfiguration ChannelConfig;
    
    AKAUDIO_API FAkOutputSettings();
};

