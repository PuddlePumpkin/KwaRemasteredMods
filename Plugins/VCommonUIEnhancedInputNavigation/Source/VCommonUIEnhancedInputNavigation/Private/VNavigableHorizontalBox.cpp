#include "VNavigableHorizontalBox.h"

UVNavigableHorizontalBox::UVNavigableHorizontalBox() {
    this->bDoNavigationLoop = false;
    this->HorizontalBox = NULL;
    this->bShouldFocusLastFocusedItemOnFocus = true;
}

void UVNavigableHorizontalBox::OnChildHovered(const TScriptInterface<IVEnhancedInputNavigable>& HoveredWidget) {
}

void UVNavigableHorizontalBox::NavigateToPrevElement() {
}

void UVNavigableHorizontalBox::NavigateToNextElement() {
}

void UVNavigableHorizontalBox::NavigateToIndex(int32 NewIndex) {
}

void UVNavigableHorizontalBox::NavigateToElement(UCommonUserWidget* ItemToNavigateTo) {
}

int32 UVNavigableHorizontalBox::GetSize() const {
    return 0;
}

UHorizontalBox* UVNavigableHorizontalBox::GetHorizontalBox() {
    return NULL;
}

int32 UVNavigableHorizontalBox::GetFocusElementIndex() const {
    return 0;
}

void UVNavigableHorizontalBox::ClearChildren() {
}

UPanelSlot* UVNavigableHorizontalBox::AddChild(UCommonUserWidget* ChildToAdd) {
    return NULL;
}


