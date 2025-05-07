#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkTVOSAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkTVOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 uNumSpatialAudioPointSources;
    
    UPROPERTY(EditAnywhere)
    bool bVerboseSystemOutput;
    
    AKAUDIO_API FAkTVOSAdvancedInitializationSettings();
};

