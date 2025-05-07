#pragma once
#include "CoreMinimal.h"
#include "ModernEffectItemData.h"
#include "OriginalInventoryMenuIngredientEffects.h"
#include "OriginalInventoryMenuItemEffects.h"
#include "VViewModelBase.h"
#include "VItemEffectsViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVItemEffectsViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalInventoryMenuItemEffects> ItemEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalInventoryMenuIngredientEffects> IngredientEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernEffectItemData> SigilstoneEffects;
    
public:
    UVItemEffectsViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSigilstoneEffects(const TArray<FModernEffectItemData>& NewSigilstoneEffects);
    
    UFUNCTION(BlueprintCallable)
    void SetItemEffects(const TArray<FOriginalInventoryMenuItemEffects>& NewItemEffects);
    
    UFUNCTION(BlueprintCallable)
    void SetIngredientEffects(const TArray<FOriginalInventoryMenuIngredientEffects>& NewIngredientEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModernEffectItemData> GetSigilstoneEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalInventoryMenuItemEffects> GetItemEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalInventoryMenuIngredientEffects> GetIngredientEffects() const;
    
};

