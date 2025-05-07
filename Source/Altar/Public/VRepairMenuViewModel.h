#pragma once
#include "CoreMinimal.h"
#include "ELegacyRepairMenuType.h"
#include "EOriginalInventoryMenuSortType.h"
#include "LegacyRepairAmount.h"
#include "LegacyRepairItemProperties.h"
#include "ModernRepairMenuCharacterData.h"
#include "VViewModelBase.h"
#include "VRepairMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVRepairMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRepairMenuSoundTrigger);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepairMenuSoundTrigger OnHammerBreakSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepairMenuSoundTrigger OnIngredientSelectedSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepairMenuSoundTrigger OnSucessRepairSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepairMenuSoundTrigger OnSucessRepairMerchantSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepairMenuSoundTrigger OnSucessRepairAllSoundTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyRepairItemProperties> RepairList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRepairMenuType TypeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRepairAmount AmountHammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRepairAmount RepairAllAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FilterButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepairAllButtonVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepairAllButtonEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRemoveButtonVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFilterButtonVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAtLeastExpert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenedFromQuickWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HammerBreakChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRepairMenuCharacterData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRepairMenuCharacterData MerchantData;
    
public:
    UVRepairMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetTypeMenu(ELegacyRepairMenuType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetSortType(const EOriginalInventoryMenuSortType& NewSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetRepairList(const TArray<FLegacyRepairItemProperties>& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetRepairAllButtonVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetRepairAllButtonEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRepairAllAmount(const FLegacyRepairAmount& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoveButtonVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(const FModernRepairMenuCharacterData& NewPlayerData);
    
    UFUNCTION(BlueprintCallable)
    void SetMerchantData(const FModernRepairMenuCharacterData& NewMerchantData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(bool bNewIsSortReversed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpenedFromQuickWheel(bool bNewIsOpenedFromQuickWheel);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAtLeastExpert(bool bNewIsAtLeastExpert);
    
    UFUNCTION(BlueprintCallable)
    void SetHammerBreakChance(float BreakChanceValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterButtonVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterButtonName(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountPlayerGold(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountMerchantGold(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountHammer(FLegacyRepairAmount NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendHoverItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedRepairAll();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedRemove();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOnRepair(int32 Item);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedFilter();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSortReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenedFromQuickWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtLeastExpert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyRepairMenuType GetTypeMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyRepairItemProperties> GetRepairList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRepairAllButtonVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRepairAllButtonEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRepairAmount GetRepairAllAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRemoveButtonVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernRepairMenuCharacterData GetPlayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernRepairMenuCharacterData GetMerchantData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHammerBreakChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFilterButtonVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFilterButtonName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRepairAmount GetAmountHammer() const;
    
};

