#include "VItemEffectsViewModel.h"

UVItemEffectsViewModel::UVItemEffectsViewModel() {
}

void UVItemEffectsViewModel::SetSigilstoneEffects(const TArray<FModernEffectItemData>& NewSigilstoneEffects) {
}

void UVItemEffectsViewModel::SetItemEffects(const TArray<FOriginalInventoryMenuItemEffects>& NewItemEffects) {
}

void UVItemEffectsViewModel::SetIngredientEffects(const TArray<FOriginalInventoryMenuIngredientEffects>& NewIngredientEffects) {
}

TArray<FModernEffectItemData> UVItemEffectsViewModel::GetSigilstoneEffects() const {
    return TArray<FModernEffectItemData>();
}

TArray<FOriginalInventoryMenuItemEffects> UVItemEffectsViewModel::GetItemEffects() const {
    return TArray<FOriginalInventoryMenuItemEffects>();
}

TArray<FOriginalInventoryMenuIngredientEffects> UVItemEffectsViewModel::GetIngredientEffects() const {
    return TArray<FOriginalInventoryMenuIngredientEffects>();
}


