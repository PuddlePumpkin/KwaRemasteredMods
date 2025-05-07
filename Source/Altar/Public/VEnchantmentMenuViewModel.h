#pragma once
#include "CoreMinimal.h"
#include "EModernEnchantmentMenuItemType.h"
#include "EModernEnchantmentMenuPage.h"
#include "EOriginalInventoryMenuSortType.h"
#include "ItemToEnchantInfo.h"
#include "SoulGemInfo.h"
#include "VModernEnchantmentItemProperties.h"
#include "VViewModelBase.h"
#include "VEnchantmentMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVEnchantmentMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSucessSoundTrigger);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEffectSettingsMenuToggle);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSucessSoundTrigger OnSucessSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectSettingsMenuToggle OnEffectSettingsMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectSettingsMenuToggle OnEffectSettingsMenuClose;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoulGemInfo SoulGemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemToEnchantInfo ItemToEnchantInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVModernEnchantmentItemProperties> ItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVModernEnchantmentItemProperties> CurrentPageItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVModernEnchantmentItemProperties> EffectsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernEnchantmentMenuPage CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversed;
    
public:
    UVEnchantmentMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSoulGemInfo(const FSoulGemInfo& NewSoulGemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetSortType(const EOriginalInventoryMenuSortType& NewSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerGold(int32 NewPlayerGold);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToEnchantInfo(const FItemToEnchantInfo& NewItemToEnchantInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetItemsList(const TArray<FVModernEnchantmentItemProperties>& NewItemsList);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(bool bNewIsSortReversed);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryForPage(const EModernEnchantmentMenuPage Page);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsList(const TArray<FVModernEnchantmentItemProperties>& NewEffectsList);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPageItemsList(const TArray<FVModernEnchantmentItemProperties>& NewItemsList);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(EModernEnchantmentMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnSoulGemButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnItemButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnExitButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnCreateButton(const FString& NewEnchantedItemName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnAvailableEffectItem(int32 ItemIndex, bool bWantToDelete);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnAddedEffectItem(int32 ItemIndex, bool bWantToDelete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSortReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemTypeOnPage(const EModernEnchantmentMenuItemType ItemType, const EModernEnchantmentMenuPage Page) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoulGemInfo GetSoulGemInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerGold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemToEnchantInfo GetItemToEnchantInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVModernEnchantmentItemProperties> GetItemsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVModernEnchantmentItemProperties> GetEffectsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVModernEnchantmentItemProperties> GetCurrentPageItemsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EModernEnchantmentMenuPage GetCurrentPage() const;
    
};

