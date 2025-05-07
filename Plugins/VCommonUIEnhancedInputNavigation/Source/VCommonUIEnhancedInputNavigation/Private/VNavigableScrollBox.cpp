#include "VNavigableScrollBox.h"

UVNavigableScrollBox::UVNavigableScrollBox() {
    this->Multiplicator = 0.90f;
    this->BasedDelay = 0.30f;
    this->MinDelay = 0.08f;
    this->bDoNavigationLoop = false;
    this->ScrollBox = NULL;
}

void UVNavigableScrollBox::SetFocusedElementIndex(int32 NewIndex) {
}


void UVNavigableScrollBox::OnChildHovered(const TScriptInterface<IVEnhancedInputNavigable>& HoveredWidget) {
}

void UVNavigableScrollBox::NavigateToPrevElement() {
}

void UVNavigableScrollBox::NavigateToNextElement() {
}

void UVNavigableScrollBox::NavigateToIndex(int32 NewIndex) {
}

void UVNavigableScrollBox::NavigateToElement(UCommonUserWidget* ItemToNavigateTo) {
}

int32 UVNavigableScrollBox::GetSize() const {
    return 0;
}

UScrollBox* UVNavigableScrollBox::GetScrollBox() {
    return NULL;
}

int32 UVNavigableScrollBox::GetFocusElementIndex() const {
    return 0;
}

UCommonUserWidget* UVNavigableScrollBox::GetFocusedElement() const {
    return NULL;
}

void UVNavigableScrollBox::ClearChildren() {
}

UPanelSlot* UVNavigableScrollBox::AddChild(UCommonUserWidget* ChildToAdd) {
    return NULL;
}


