#include "VNavigableListView.h"

UVNavigableListView::UVNavigableListView() {
    this->Multiplicator = 0.90f;
    this->BasedDelay = 0.30f;
    this->MinDelay = 0.08f;
    this->bDoesAllowLoopingNavigation = true;
    this->bNavigateOnHover = true;
    this->ListView = NULL;
    this->HoveredItem = NULL;
}

void UVNavigableListView::StopAutomaticElementNavigation() {
}

void UVNavigableListView::NavigateToPrevElement() {
}

void UVNavigableListView::NavigateToNextElement() {
}

void UVNavigableListView::NavigateToIndex(int32 NewIndex) {
}

void UVNavigableListView::NavigateToElement(UObject* ItemToNavigateTo) {
}

bool UVNavigableListView::ListViewIsVertical() const {
    return false;
}

UUserWidget* UVNavigableListView::GetWidgetFromItem(UObject* Item) const {
    return NULL;
}

int32 UVNavigableListView::GetSize() const {
    return 0;
}

UCommonListView* UVNavigableListView::GetListView() const {
    return NULL;
}

UObject* UVNavigableListView::GetItemAt(int32 ItemIndex) const {
    return NULL;
}

UObject* UVNavigableListView::GetFocusedElement() const {
    return NULL;
}

int32 UVNavigableListView::GetCurrentElementIndex() const {
    return 0;
}

void UVNavigableListView::ClearSelection() {
}

void UVNavigableListView::AddItem(UObject* ItemToAdd) {
}


