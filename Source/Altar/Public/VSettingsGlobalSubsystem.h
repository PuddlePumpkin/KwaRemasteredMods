#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnRequestSaveLoadPopupDelegate.h"
#include "OnRequestTimedRevertPopupDelegate.h"
#include "OnSettingsBroadcastDelegate.h"
#include "OnSettingsChangedDelegate.h"
#include "OnUpdateSettingsLockStateDelegate.h"
#include "VSettingsGlobalSubsystem.generated.h"

class UVModernSettingWidget;

UCLASS(Blueprintable)
class ALTAR_API UVSettingsGlobalSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestSaveLoadPopup OnRequestSaveLoadPopup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsBroadcast OnSettingsBroadcastDelagete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsChanged OnSettingsChangedDelegete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestTimedRevertPopup OnRequestTimedRevertPopup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSettingsLockState OnUpdateSettingsLockState;
    
    UVSettingsGlobalSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestSaveLoadPopup(const FText& PopupText, int32 ModIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestBroadcastSettings(const FString& CommandToBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void RequestBroadcastOnUpdateSettingsLockState(bool NewLockState);
    
    UFUNCTION(BlueprintCallable)
    void RequestBroadcastOnSettingsChanged(UVModernSettingWidget* ChangedSettings);
    
    UFUNCTION(BlueprintCallable)
    void RequestBroadcastOnRequestTimedRevertPopup(UVModernSettingWidget* ChangedSettings);
    
};

