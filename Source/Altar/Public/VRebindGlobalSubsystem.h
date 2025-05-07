#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EVModernRebindType.h"
#include "ModernPairedRebindData.h"
#include "ModernRebindData.h"
#include "OnBroadcastListenChangedDelegate.h"
#include "OnRebindChangedDelegate.h"
#include "OnRequestWidgetRefreshDelegate.h"
#include "OnSelectorListenStateChangedDelegate.h"
#include "VRebindGlobalSubsystem.generated.h"

class UVAltarNavigableInputKeySelector;
class UVModernRebindSettingWidget;
class UVNavigableInputKeySelector;

UCLASS(Blueprintable)
class ALTAR_API UVRebindGlobalSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestWidgetRefresh OnRequestWidgetRefresh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRebindChanged OnRebindChangedDelegete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectorListenStateChanged OnSelectorListenStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBroadcastListenChanged OnBroadcastListenChangedDelegate;
    
    UVRebindGlobalSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterRebindWidget(UVModernRebindSettingWidget* OwnerItem);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterListeningWidget(UVModernRebindSettingWidget* RebindWidget, UVNavigableInputKeySelector* Target);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterKeySelector(UVAltarNavigableInputKeySelector* Selector);
    
    UFUNCTION(BlueprintCallable)
    void StopAllSelectorListenning(const UVAltarNavigableInputKeySelector* Exeption);
    
    UFUNCTION(BlueprintCallable)
    void RequestWidgetsRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RequestBroadcastOnSettingsChanged(UVModernRebindSettingWidget* ChangedRebind);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRebindWidget(UVModernRebindSettingWidget* OwnerItem, EVModernRebindType Type, const FModernRebindData& RebindData, const FModernPairedRebindData& PairedRebindData);
    
    UFUNCTION(BlueprintCallable)
    void RegisterListeningWidget(UVModernRebindSettingWidget* RebindWidget, UVNavigableInputKeySelector* Target);
    
    UFUNCTION(BlueprintCallable)
    void RegisterKeySelector(UVAltarNavigableInputKeySelector* Selector);
    
    UFUNCTION(BlueprintCallable)
    void NotifyRebindHasBeenChanged(bool bListenState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHaveAEmptyPrimaryBindingForType(EVModernRebindType ComparedType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHaveAEmptyPrimaryBinding() const;
    
};

