#include "VNavigableActivatableWidgetBase.h"

UVNavigableActivatableWidgetBase::UVNavigableActivatableWidgetBase() {
    this->bShouldFocusOnHover = false;
    this->bShouldHandleTriggeringInputAction = false;
    this->bShouldGiveNavigationInputToParentOnBorder = false;
    this->NavigableParent = NULL;
}

void UVNavigableActivatableWidgetBase::UnBindAllSpecificInputAction() {
}

bool UVNavigableActivatableWidgetBase::GetIsFocussed() const {
    return false;
}









void UVNavigableActivatableWidgetBase::BindInputAction(const FVGenericInputActionData& InputActionData) {
}


