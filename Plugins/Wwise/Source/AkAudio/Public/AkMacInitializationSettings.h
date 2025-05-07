#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkMacAdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkMacInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkMacInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkMacAdvancedInitializationSettings AdvancedSettings;
    
    UAkMacInitializationSettings();

    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

