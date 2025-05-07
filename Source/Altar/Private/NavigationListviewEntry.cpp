#include "NavigationListviewEntry.h"

UNavigationListviewEntry::UNavigationListviewEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsSelectable = true;
}

void UNavigationListviewEntry::SetItemObject(UObject* Item) {
}


bool UNavigationListviewEntry::IsListItemSelectable_Implementation() const {
    return false;
}


