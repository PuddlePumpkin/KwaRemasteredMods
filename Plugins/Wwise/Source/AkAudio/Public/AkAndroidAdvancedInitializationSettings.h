#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkAndroidAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 AudioAPI;
    
    UPROPERTY(EditAnywhere)
    bool RoundFrameSizeToHardwareSize;
    
    UPROPERTY(EditAnywhere)
    bool UseLowLatencyMode;
    
    UPROPERTY(EditAnywhere)
    bool bVerboseSink;
    
    AKAUDIO_API FAkAndroidAdvancedInitializationSettings();
};

