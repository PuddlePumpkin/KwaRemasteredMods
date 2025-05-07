#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ModernSettingCommand.h"
#include "ModernSettingTableRow.h"
#include "OnRequestChangeParentScrollStateDelegate.h"
#include "OnSettingFocussedDelegate.h"
#include "OnSettingsWidgetValueChangedDelegate.h"
#include "VAltarWidget.h"
#include "VModernSettingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernSettingWidget : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsWidgetValueChanged OnSettingsWidgetValueChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingFocussed OnSettingFocussedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestChangeParentScrollState OnRequestChangeParentScrollState;
    
    UVModernSettingWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateStepCommand(const int32 StepIndex, const FModernSettingCommand& NewCommand);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLockState(bool bNewLockState);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingRow(const FModernSettingTableRow& NewSettingRow);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWidgetValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveSetting();
    
    UFUNCTION(BlueprintCallable)
    void RevertSettingToSavedState();
    
    UFUNCTION(BlueprintCallable)
    void RevertSettingToLastChange();
    
    UFUNCTION(BlueprintCallable)
    void RevertSettingToDefault();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeParentScrollState(bool bNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVibrationRequested();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserInputDeviceConnectionChange(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingNavigateRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingNavigateLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingChanged(const FModernSettingTableRow& NewSettingRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingAccept();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshWidgetRequested(float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveBroadcastFromSettingSubsystem(const FString& NewCommand);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockStateUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleVariableChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernSettingTableRow GetSettingRow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPainted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWidgetValue() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyNewValue(float WidgetValue, bool bDoesTriggerAutoRevert, bool bIsInit);
    
};

