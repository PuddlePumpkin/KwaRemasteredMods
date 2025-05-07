#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuSortType.h"
#include "ItemToEnchantInfo.h"
#include "ModernEffectItemData.h"
#include "ModernSigilStoneMenuItemProperties.h"
#include "SoulGemInfo.h"
#include "VViewModelBase.h"
#include "VSigilStoneMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSigilStoneMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSucessSoundTrigger);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSucessSoundTrigger OnSucessSoundTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemToEnchantInfo ItemToEnchantInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoulGemInfo SigilStoneInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernEffectItemData GearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernEffectItemData WeaponEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSigilStoneMenuItemProperties> ItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversed;
    
public:
    UVSigilStoneMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetWeaponEffect(const FModernEffectItemData& NewAvailableEffect);
    
    UFUNCTION(BlueprintCallable)
    void SetSortType(const EOriginalInventoryMenuSortType& NewSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetSigilStoneInfo(const FSoulGemInfo& NewSigilStoneInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToEnchantInfo(const FItemToEnchantInfo& NewItemToEnchantInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetItemsList(const TArray<FModernSigilStoneMenuItemProperties>& NewList);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(bool bNewIsSortReversed);
    
    UFUNCTION(BlueprintCallable)
    void SetGearEffect(const FModernEffectItemData& NewAvailableEffect);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendHoverAnItemToEnchant(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnItemButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnExitButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnCreateButton(const FString& NewEnchantedItemName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSortReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernEffectItemData GetWeaponEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoulGemInfo GetSigilStoneInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemToEnchantInfo GetItemToEnchantInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModernSigilStoneMenuItemProperties> GetItemsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernEffectItemData GetGearEffect() const;
    
};

