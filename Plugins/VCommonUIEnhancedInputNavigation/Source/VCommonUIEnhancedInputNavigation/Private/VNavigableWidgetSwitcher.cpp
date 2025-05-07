#include "VNavigableWidgetSwitcher.h"

UVNavigableWidgetSwitcher::UVNavigableWidgetSwitcher() {
    this->Switcher = NULL;
}

void UVNavigableWidgetSwitcher::NavigateToWidget(UWidget* NewWidget) {
}

void UVNavigableWidgetSwitcher::NavigateToIndex(int32 NewIndex) {
}

UWidgetSwitcher* UVNavigableWidgetSwitcher::GetSwitcher() const {
    return NULL;
}

UWidget* UVNavigableWidgetSwitcher::GetCurrentWidget() const {
    return NULL;
}

int32 UVNavigableWidgetSwitcher::GetCurrentIndex() const {
    return 0;
}

void UVNavigableWidgetSwitcher::DisplayWidget(UWidget* NewWidget) {
}

void UVNavigableWidgetSwitcher::DisplayIndex(int32 NewIndex) {
}

void UVNavigableWidgetSwitcher::ClearChildren() {
}

UPanelSlot* UVNavigableWidgetSwitcher::AddChild(UWidget* ChildToAdd) {
    return NULL;
}


