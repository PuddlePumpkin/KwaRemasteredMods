#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWindowsAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseHeadMountedDisplayAudioDevice;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxSystemAudioObjects;
    
    AKAUDIO_API FAkWindowsAdvancedInitializationSettings();
};

