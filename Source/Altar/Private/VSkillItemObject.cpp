#include "VSkillItemObject.h"

UVSkillItemObject::UVSkillItemObject() {
    this->bIsSelected = false;
}

void UVSkillItemObject::SetProperties(const FSkillsMenuItemProperties& NewProperties) {
}

void UVSkillItemObject::SetIsSelected(bool bNewSelectionState) {
}

bool UVSkillItemObject::IsSelected() const {
    return false;
}

FSkillsMenuItemProperties UVSkillItemObject::GetProperties() const {
    return FSkillsMenuItemProperties{};
}


