#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkAudioSession.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkIOSAdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkIOSInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkIOSInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkAudioSession AudioSession;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkIOSAdvancedInitializationSettings AdvancedSettings;
    
    UAkIOSInitializationSettings();


    // Fix for true pure virtual functions not being implemented
};

