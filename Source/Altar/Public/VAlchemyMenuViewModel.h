#pragma once
#include "CoreMinimal.h"
#include "LegacyIngredientItemProperties.h"
#include "ModernApparatusProperties.h"
#include "ModernItemEffectProperties.h"
#include "VViewModelBase.h"
#include "VAlchemyMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAlchemyMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernApparatusProperties> ApparatusProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PotionDefaultNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedDefaultPotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PotionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PotionPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyIngredientItemProperties> IngredientItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyIngredientItemProperties> ItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernItemEffectProperties> CurrentItemEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCreateButtonEnable;
    
public:
    UVAlchemyMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateDisplayedItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<FModernItemEffectProperties> SortEffectsListByName(TArray<FModernItemEffectProperties> Effects);
    
    UFUNCTION(BlueprintCallable)
    void SetPotionWeight(float NewWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetPotionPrice(int32 NewPrice);
    
    UFUNCTION(BlueprintCallable)
    void SetPotionName(const FText& NewPotionName);
    
    UFUNCTION(BlueprintCallable)
    void SetPotionDefaultNameAndKey(const FText& NewLocalizedPotionName, const FText& AssiosiatedKey);
    
    UFUNCTION(BlueprintCallable)
    void SetItemsList(const TArray<FLegacyIngredientItemProperties>& NewIngredients);
    
    UFUNCTION(BlueprintCallable)
    void SetIngredientItems(const TArray<FLegacyIngredientItemProperties>& NewItems);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectFiltersSelectedNames(const TArray<FString>& NewEffectFiltersSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentItemEffects(const TArray<FModernItemEffectProperties>& NewEffectsProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateButtonEnable(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetApparatusProperties(const TArray<FModernApparatusProperties>& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedIngredient(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedExit();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCreate(FText NewPotionName);
    
    UFUNCTION(BlueprintCallable)
    void OnMustContainSelectedFiltersClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnEffectFilterClicked(const FString& EffectName);
    
    UFUNCTION(BlueprintCallable)
    void OnClearAllFiltersClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MustContainAllSelectedFilters() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasEffectOnFilter(const FLegacyIngredientItemProperties& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPotionWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPotionPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPotionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPotionDefaultNameKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedPotionDefaultName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyIngredientItemProperties> GetItemsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyIngredientItemProperties> GetIngredientItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetEffectFiltersSelectedNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModernItemEffectProperties> GetCurrentItemEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCreateButtonEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModernApparatusProperties> GetApparatusProperties() const;
    
};

