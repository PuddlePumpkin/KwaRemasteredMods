#include "VNavigableVerticalBox.h"

UVNavigableVerticalBox::UVNavigableVerticalBox() {
    this->bDoNavigationLoop = false;
    this->VerticalBox = NULL;
}

void UVNavigableVerticalBox::OnChildHovered(const TScriptInterface<IVEnhancedInputNavigable>& HoveredWidget) {
}

void UVNavigableVerticalBox::NavigateToPrevElement() {
}

void UVNavigableVerticalBox::NavigateToNextElement() {
}

void UVNavigableVerticalBox::NavigateToIndex(int32 NewIndex) {
}

void UVNavigableVerticalBox::NavigateToElement(UCommonUserWidget* ItemToNavigateTo) {
}

UVerticalBox* UVNavigableVerticalBox::GetVerticalBox() {
    return NULL;
}

int32 UVNavigableVerticalBox::GetSize() const {
    return 0;
}

int32 UVNavigableVerticalBox::GetFocusElementIndex() const {
    return 0;
}

void UVNavigableVerticalBox::ClearChildren() {
}

UPanelSlot* UVNavigableVerticalBox::AddChild(UCommonUserWidget* ChildToAdd) {
    return NULL;
}


