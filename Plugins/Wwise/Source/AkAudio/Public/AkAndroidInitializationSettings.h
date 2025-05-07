#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkAndroidAdvancedInitializationSettings.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkAndroidInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkAndroidInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkAndroidAdvancedInitializationSettings AdvancedSettings;
    
    UAkAndroidInitializationSettings();

    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

