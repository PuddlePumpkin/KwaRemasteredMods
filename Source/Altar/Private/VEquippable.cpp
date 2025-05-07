#include "VEquippable.h"

AVEquippable::AVEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEquipped = false;
}

bool AVEquippable::IsEquipped() const {
    return false;
}


