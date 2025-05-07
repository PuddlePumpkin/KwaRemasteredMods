#pragma once
#include "CoreMinimal.h"
#include "LegacyControlsInputMapping.h"
#include "LegacyXControllerSettings.h"
#include "VAltarMenu.h"
#include "VLegacyXControlsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyXControlsMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyXControllerSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyControlsInputMapping> ControllerMappings;
    
public:
    UVLegacyXControlsMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetVibration(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalSensitivity(const float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FLegacyXControllerSettings& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMapping(const FLegacyControlsInputMapping& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertY(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalSensitivity(const float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetControllerMappings(const TArray<FLegacyControlsInputMapping>& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsUpdated(const FLegacyXControllerSettings& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerMappingsUpdated(const TArray<FLegacyControlsInputMapping>& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyXControllerSettings GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyControlsInputMapping> GetControllerMappings() const;
    
};

