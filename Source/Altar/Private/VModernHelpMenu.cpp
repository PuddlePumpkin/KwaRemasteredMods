#include "VModernHelpMenu.h"

UVModernHelpMenu::UVModernHelpMenu() {
    this->CurrentData = NULL;
    this->DataEntryLength = 0;
}

void UVModernHelpMenu::UpdateListData() {
}

void UVModernHelpMenu::ToggleData(UHelpMenuListEntryData* Entry, UDataTable* Tutorials) {
}

void UVModernHelpMenu::ToggleCategory(UHelpMenuListEntryData* Entry) {
}


void UVModernHelpMenu::ProcessTutorials(const UDataTable* Tutorials) {
}




FText UVModernHelpMenu::GetDetailIndexText() const {
    return FText::GetEmpty();
}

int32 UVModernHelpMenu::GetCurrentDataAdjustedIndex() const {
    return 0;
}

void UVModernHelpMenu::CreateListData(const TMap<FString, FHelpEntryCategoryData>& DataPerCategory) {
}


