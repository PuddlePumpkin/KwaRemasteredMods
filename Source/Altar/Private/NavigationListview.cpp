#include "NavigationListview.h"

UNavigationListview::UNavigationListview() {
}

void UNavigationListview::OnEntryClicked(UObject* Item) {
}

TScriptInterface<INavigationUIElement> UNavigationListview::NavigateToItemIndex(int32 SelectedChildIndex) {
    return NULL;
}

int32 UNavigationListview::GetChildIndexFromWidget(UWidget* NavigatableWidget) const {
    return 0;
}


