#pragma once
#include "CoreMinimal.h"
#include "LegacyScrollbarValueProperties.h"
#include "LegacySleepWaitMenuGameInfo.h"
#include "VViewModelBase.h"
#include "VSleepWaitMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSleepWaitMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitingInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarValueProperties ScrollbarProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacySleepWaitMenuGameInfo SleepWaitGameInfo;
    
public:
    UVSleepWaitMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeToWait(float NewTimeToWait);
    
    UFUNCTION(BlueprintCallable)
    void SetSleepWaitGameInfo(const FLegacySleepWaitMenuGameInfo& NewSleepWaitGameInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldFadeOut(bool bInShouldFadeOut);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetIsWaitingInProgress(bool bNewIsWaitingInProgress);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendTimeToWait(float NewTimeToWait);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOnWait();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacySleepWaitMenuGameInfo GetSleepWaitGameInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldFadeOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarValueProperties GetScrollbarProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWaitingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSleep() const;
    
};

