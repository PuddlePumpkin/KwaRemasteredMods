#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FLegacyControlsDevice.h"
#include "LegacyControlsInputMapping.h"
#include "LegacyControlsSettings.h"
#include "VAltarMenu.h"
#include "VLegacyControlsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyControlsMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLegacyControlsSettingsUpdated, FLegacyControlsSettings, Settings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLegacyControlsMappingUpdated, FText, Action, FKey, Mapping);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLegacyControlsDeviceUpdated, FLegacyControlsDevice, Device);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsSettingsUpdated OnDeviceSettingsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsMappingUpdated OnDeviceMappingsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsDeviceUpdated OnDeviceUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyControlsInputMapping> DeviceMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJoystickDetected;
    
public:
    UVLegacyControlsMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSwapStickControlsInternal(bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FLegacyControlsSettings& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityInternal(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsJoystickDetected(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInvertYInternal(bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeviceMappings(const TArray<FLegacyControlsInputMapping>& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDeviceMapping(const FLegacyControlsInputMapping& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsUpdatedInternal(const FLegacyControlsSettings& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsJoystickDetectedUpdatedInternal(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeviceMappingsUpdatedInternal(const TArray<FLegacyControlsInputMapping>& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyControlsSettings GetSettings() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsJoystickDetected() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyControlsInputMapping> GetDeviceMappings() const;
    
};

