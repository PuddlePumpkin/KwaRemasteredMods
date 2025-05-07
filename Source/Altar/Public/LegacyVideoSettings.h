#pragma once
#include "CoreMinimal.h"
#include "FLegacyVideoSettingsEnum.h"
#include "LegacyVideoSettings.generated.h"

USTRUCT(BlueprintType)
struct FLegacyVideoSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FLegacyVideoSettingsEnum, uint8> UintSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FLegacyVideoSettingsEnum, float> FloatSettings;
    
    ALTAR_API FLegacyVideoSettings();
};

