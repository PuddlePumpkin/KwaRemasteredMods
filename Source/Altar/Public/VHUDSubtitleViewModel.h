#pragma once
#include "CoreMinimal.h"
#include "LegacyNotificationProperties.h"
#include "OnNotificationFinishedToBeConsumedDelegate.h"
#include "OnNotificationSetActiveUpdatedDelegate.h"
#include "VViewModelBase.h"
#include "VHUDSubtitleViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVHUDSubtitleViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationSetActiveUpdated OnNotificationSetActiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationFinishedToBeConsumed OnNotificationFinishedToBeConsumed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyNotificationProperties Notification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyNotificationProperties> NotificationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotificationVisibility;
    
public:
    UVHUDSubtitleViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateNotificationQueue();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitle(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetNotificationVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetNotification(const FLegacyNotificationProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void ResumeNotificationQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtitleVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubtitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNotificationVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyNotificationProperties GetNotification() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeNotification();
    
    UFUNCTION(BlueprintCallable)
    void AddNotification(const FLegacyNotificationProperties& Properties);
    
};

