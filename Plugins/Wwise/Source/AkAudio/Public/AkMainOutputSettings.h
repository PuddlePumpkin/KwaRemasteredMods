#pragma once
#include "CoreMinimal.h"
#include "EAkChannelConfigType.h"
#include "EAkPanningRule.h"
#include "AkMainOutputSettings.generated.h"

USTRUCT()
struct FAkMainOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AudioDeviceShareSet;
    
    UPROPERTY(EditAnywhere)
    uint32 DeviceID;
    
    UPROPERTY(EditAnywhere)
    EAkPanningRule PanningRule;
    
    UPROPERTY(EditAnywhere)
    EAkChannelConfigType ChannelConfigType;
    
    UPROPERTY(EditAnywhere)
    uint32 ChannelMask;
    
    UPROPERTY(EditAnywhere)
    uint32 NumberOfChannels;
    
    AKAUDIO_API FAkMainOutputSettings();
};

