#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkXSXAdvancedInitializationSettings.h"
#include "AkXSXApuHeapInitializationSettings.h"
#include "AkXSXInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkXSXInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkXSXApuHeapInitializationSettings ApuHeapSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkXSXAdvancedInitializationSettings AdvancedSettings;
    
    UAkXSXInitializationSettings();

    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

