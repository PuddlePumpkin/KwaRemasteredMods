#include "VAddedEffectsListViewModel.h"

UVAddedEffectsListViewModel::UVAddedEffectsListViewModel() {
}

void UVAddedEffectsListViewModel::SetModernAddedItemEffectsList(const TArray<FModernEffectItemData>& NewModernAddedItemEffectsList) {
}

void UVAddedEffectsListViewModel::SetAddedEffectsList(const TArray<FLegacyAddedEffectItemProperties>& NewAddedEffectsList) {
}

TArray<FModernEffectItemData> UVAddedEffectsListViewModel::GetModernAddedItemEffectsList() const {
    return TArray<FModernEffectItemData>();
}

TArray<FLegacyAddedEffectItemProperties> UVAddedEffectsListViewModel::GetAddedEffectsList() const {
    return TArray<FLegacyAddedEffectItemProperties>();
}


