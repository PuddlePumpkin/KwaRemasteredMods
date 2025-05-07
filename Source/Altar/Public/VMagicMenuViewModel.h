#pragma once
#include "CoreMinimal.h"
#include "ELegacyMagicMenuItemType.h"
#include "ELegacyMagicMenuPage.h"
#include "ELegacyMagicMenuSortType.h"
#include "LegacyMagicMenuItemProperties.h"
#include "ModernSpellEffectivenessProperties.h"
#include "VViewModelBase.h"
#include "VMagicMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVMagicMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpellEquipSoundTrigger);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpellEquipSoundTrigger OnSpellEquipSoundTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMagicMenuItemProperties> Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMagicMenuItemProperties> CurrentPageInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMagicMenuItemProperties> FavoritesItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpellEffectiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSpellEffectivenessProperties SpellEfectivenessExplanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyMagicMenuPage CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyMagicMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMagicMenuItemProperties CurrentSpellEquiped;
    
public:
    UVMagicMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void ToggleFavoriteItem(const FLegacyMagicMenuItemProperties& InItem);
    
    UFUNCTION(BlueprintCallable)
    void SetSpellEffectiveness(float NewSpellEffectiveness);
    
    UFUNCTION(BlueprintCallable)
    void SetSpellEfectivenessExplanation(const FModernSpellEffectivenessProperties NewSpellEffectivenessExplanation);
    
    UFUNCTION(BlueprintCallable)
    void SetSortType(ELegacyMagicMenuSortType NewSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(bool bNewIsSortReversed);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryForPage(const ELegacyMagicMenuPage Page);
    
    UFUNCTION(BlueprintCallable)
    void SetInventory(const TArray<FLegacyMagicMenuItemProperties>& NewItems);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSpellEquiped(const FLegacyMagicMenuItemProperties& InSpellEquiped);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(ELegacyMagicMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceCurrentPageInventory(const TArray<FLegacyMagicMenuItemProperties>& NewItems);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendItemHoverHandler(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnItemHandler(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSortReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemTypeOnPage(const ELegacyMagicMenuItemType Item, const ELegacyMagicMenuPage Page) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpellEffectiveness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernSpellEffectivenessProperties GetSpellEfectivenessExplanation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyMagicMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMagicMenuItemProperties> GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMagicMenuItemProperties> GetFavoritesItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMagicMenuItemProperties GetCurrentSpellEquiped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMagicMenuItemProperties> GetCurrentPageInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyMagicMenuPage GetCurrentPage() const;
    
};

