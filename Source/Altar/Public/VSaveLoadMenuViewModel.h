#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadMenuOpeningSource.h"
#include "OnSaveSuccessfulDelegate.h"
#include "VSaveGameDetails.h"
#include "VViewModelBase.h"
#include "VSaveLoadMenuViewModel.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UVSaveLoadMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveSuccessful OnSaveSuccessful;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadMenuOpeningSource CachedOpeningSource;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVSaveGameDetails> SavesMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSaveMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClickedItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClickedSaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShiftPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoverItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> ThumbnailMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAllowListViewItemClicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBackOutMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenuIsBusy;
    
public:
    UVSaveLoadMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateLoadingScreenDataFromSave(const FString& SaveSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowListViewItemClicks() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldAllowListViewItemClicks(bool bInNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSavesMetaData(const TMap<FString, FVSaveGameDetails>& NewSavesMetaData);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuIsBusy(bool newMenuIsBusy);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBackOutMenu(bool bInNewValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedUploadItem(int32 SaveIndex, const FString& SaveSlotName, const FString& SaveContext);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedReturnButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedItem(int32 SaveIndex, const FString& SaveSlotName, bool InIsShiftPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MustShowUploadItemButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MenuIsBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSaveTextFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FVSaveGameDetails> GetSavesMetaData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveTypeFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveTimeFromSlot(const FString& SlotName, const bool InFormat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSavePlayerNameFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveNameFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveLocationFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveLevelFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveDayFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModernSaveDateFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGameDetailsFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFullSaveNameFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableAchievementFromSlot(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* FindOrAddGameThumbnailFromSlot(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBackOutMenu() const;
    
};

