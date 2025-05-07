#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "VAltarImageCalibrationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarImageCalibrationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UVAltarImageCalibrationWidget();

    UFUNCTION(BlueprintCallable)
    void SetAndSaveBrightnessSetting(float BrightnessValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCalibratedSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightnessSetting() const;
    
};

