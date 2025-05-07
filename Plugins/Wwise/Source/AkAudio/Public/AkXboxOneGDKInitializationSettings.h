#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkXboxOneGDKAdvancedInitializationSettings.h"
#include "AkXboxOneGDKApuHeapInitializationSettings.h"
#include "AkXboxOneGDKInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkXboxOneGDKInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;
    
    UAkXboxOneGDKInitializationSettings();

    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

