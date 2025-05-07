#include "VLegacyBookMenu.h"
#include "VLegacyMenuBookLine.h"

UVLegacyBookMenu::UVLegacyBookMenu() {
    this->BookLineClass = UVLegacyMenuBookLine::StaticClass();
    this->CurrentDisplayedPageIndex = 0;
    this->bIsAScroll = false;
    this->bCanBeTaken = false;
    this->BookImageDataTable = NULL;
}

void UVLegacyBookMenu::SplitTextIntoTextLines(const TArray<FLegacyBookStylizedText>& Texts) {
}

void UVLegacyBookMenu::ResetContainers(bool bEmptyContainers) {
}

void UVLegacyBookMenu::RemoveEmptyLinesBeforePageBreaks() {
}

void UVLegacyBookMenu::RemoveEmptyLinesAtTheEndOfTheList() {
}

void UVLegacyBookMenu::ComputeNbLinePerPages() {
}


