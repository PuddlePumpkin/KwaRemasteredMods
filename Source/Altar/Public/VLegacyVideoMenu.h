#pragma once
#include "CoreMinimal.h"
#include "ELegacyVideoMenuOptionType.h"
#include "FLegacyVideoSettingsEnum.h"
#include "LegacyVideoSettings.h"
#include "LegacyVideoTextSettingValues.h"
#include "VAltarMenu.h"
#include "VLegacyVideoMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyVideoMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyVideoSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyVideoTextSettingValues SettingOptions;
    
public:
    UVLegacyVideoMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUintSetting(const FLegacyVideoSettingsEnum SettingName, uint8 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FLegacyVideoSettings& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingOptions(const FLegacyVideoTextSettingValues& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFloatSetting(const FLegacyVideoSettingsEnum SettingName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsUpdated(const FLegacyVideoSettings& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingOptionsUpdated(const FLegacyVideoTextSettingValues& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResolutionWidescreen() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetUintSetting(const FLegacyVideoSettingsEnum SettingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyVideoSettings GetSettings() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetSettingOptionsFromType(const ELegacyVideoMenuOptionType OptionType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyVideoTextSettingValues GetSettingOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatSetting(const FLegacyVideoSettingsEnum SettingName) const;
    
};

