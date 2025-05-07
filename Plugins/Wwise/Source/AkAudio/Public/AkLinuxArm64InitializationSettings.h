#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkLinuxArm64InitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkLinuxArm64InitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
    
    UAkLinuxArm64InitializationSettings();

    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

