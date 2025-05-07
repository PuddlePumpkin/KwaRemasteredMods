#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool EnableMultiCoreRendering;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxNumJobWorkers;
    
    UPROPERTY(EditAnywhere)
    uint32 JobWorkerMaxExecutionTimeUSec;
    
    AKAUDIO_API FAkAdvancedInitializationSettingsWithMultiCoreRendering();
};

