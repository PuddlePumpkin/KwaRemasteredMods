#include "VNavigableCarousel.h"

UVNavigableCarousel::UVNavigableCarousel() {
    this->bIsCyclic = false;
    this->bHaveLeftDecorator = false;
    this->LeftDecoratorClass = NULL;
    this->bHaveRightDecorator = false;
    this->RightDecoratorClass = NULL;
    this->Carousel = NULL;
    this->LeftDecorator = NULL;
    this->RightDecorator = NULL;
}

void UVNavigableCarousel::NavigateToStart() {
}

void UVNavigableCarousel::NavigateToPrevElement() {
}

void UVNavigableCarousel::NavigateToNextElement() {
}

void UVNavigableCarousel::NavigateToIndex(int32 NewIndex) {
}

void UVNavigableCarousel::NavigateToEnd() {
}

void UVNavigableCarousel::NavigateToElement(UWidget* ItemToNavigateTo) {
}

UPanelSlot* UVNavigableCarousel::InsertChild(UWidget* ChildToAdd, int32 Index) {
    return NULL;
}

int32 UVNavigableCarousel::GetSize() const {
    return 0;
}

int32 UVNavigableCarousel::GetLastIndex() const {
    return 0;
}

int32 UVNavigableCarousel::GetItemIndex(UWidget* Item) const {
    return 0;
}

UWidget* UVNavigableCarousel::GetItemAtIndex(int32 Index) const {
    return NULL;
}

int32 UVNavigableCarousel::GetFirstIndex() const {
    return 0;
}

UWidget* UVNavigableCarousel::GetCurrentItem() const {
    return NULL;
}

int32 UVNavigableCarousel::GetCurrentIndex() const {
    return 0;
}

UCommonWidgetCarousel* UVNavigableCarousel::GetCarousel() const {
    return NULL;
}

bool UVNavigableCarousel::DoesContaintItem(UWidget* Item) const {
    return false;
}

void UVNavigableCarousel::ClearChildren() {
}

UPanelSlot* UVNavigableCarousel::AddChild(UWidget* ChildToAdd) {
    return NULL;
}


