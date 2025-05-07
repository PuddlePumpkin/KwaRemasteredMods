#include "HelpMenuListEntryData.h"

UHelpMenuListEntryData::UHelpMenuListEntryData() {
    this->EntryIcon = NULL;
    this->bIsExpanded = false;
    this->AdjustedIndex = -1;
}

void UHelpMenuListEntryData::InitializeHeader(const FText& HeaderString, UTexture2D* CategoryIcon, bool bInIsExpanded) {
}

void UHelpMenuListEntryData::InitializeEntry(const FName& ID, const FModernHelpMenuEntry& DataEntry) {
}

bool UHelpMenuListEntryData::GetIsCategory() {
    return false;
}


