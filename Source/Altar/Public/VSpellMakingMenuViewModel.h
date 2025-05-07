#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuSortType.h"
#include "LegacyEffectsItemProperties.h"
#include "LegacySpellMakingCost.h"
#include "VViewModelBase.h"
#include "VSpellMakingMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSpellMakingMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSucessSoundTrigger);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEffectSettingsMenuToggle);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectSettingsMenuToggle OnEffectSettingsMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectSettingsMenuToggle OnEffectSettingsMenuClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSucessSoundTrigger OnSucessSoundTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyEffectsItemProperties> KnownEffectsItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacySpellMakingCost SpellMakingCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RequiredEffectsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequiredEffectVisible;
    
public:
    UVSpellMakingMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSpellMakingCost(const FLegacySpellMakingCost& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSortType(const EOriginalInventoryMenuSortType& NewSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredEffectVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredEffectsText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetKnownEffectsItems(const TArray<FLegacyEffectsItemProperties>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(bool bNewIsSortReversed);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedKnownEffect(int32 Index, bool bWantToDelete);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedExit();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCreate(FText NewSpellName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedAddedEffect(int32 Index, bool bWantToDelete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSortReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequiredEffectVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacySpellMakingCost GetSpellMakingCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRequiredEffectsText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyEffectsItemProperties> GetKnownEffectsItems() const;
    
};

