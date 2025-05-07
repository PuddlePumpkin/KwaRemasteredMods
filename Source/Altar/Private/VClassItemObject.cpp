#include "VClassItemObject.h"

UVClassItemObject::UVClassItemObject() {
    this->bIsSelected = false;
}

void UVClassItemObject::SetProperties(const FPlayerClassItemProperties& NewProperties) {
}

void UVClassItemObject::SetIsSelected(bool bNewSelectionState) {
}

bool UVClassItemObject::IsSelected() const {
    return false;
}

FPlayerClassItemProperties UVClassItemObject::GetProperties() const {
    return FPlayerClassItemProperties{};
}


