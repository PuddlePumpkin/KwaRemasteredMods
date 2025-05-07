#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkMacAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkMacAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 uNumSpatialAudioPointSources;
    
    UPROPERTY(EditAnywhere)
    bool bVerboseSystemOutput;
    
    AKAUDIO_API FAkMacAdvancedInitializationSettings();
};

