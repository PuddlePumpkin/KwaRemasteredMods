#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "VAltarImageCalibrationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=AltarImageCalibration)
class ALTAR_API UVAltarImageCalibrationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrightnessCalibration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCalibrated;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BrightnessCalibrationMaterial;
    
    UVAltarImageCalibrationSettings();

};

