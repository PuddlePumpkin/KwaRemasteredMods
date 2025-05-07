#pragma once
#include "CoreMinimal.h"
#include "LegacyControlsSettings.generated.h"

USTRUCT(BlueprintType)
struct FLegacyControlsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwapStickControls;
    
    ALTAR_API FLegacyControlsSettings();
};

