#include "VSkillsMenuViewModel.h"

UVSkillsMenuViewModel::UVSkillsMenuViewModel() {
}

void UVSkillsMenuViewModel::UpdateListAfterItemSelectionChanged() {
}

void UVSkillsMenuViewModel::UpdateItemSelection(int32 ItemIndex, bool bNewSelectionState) {
}

void UVSkillsMenuViewModel::SetProperties(const FSkillsMenuProperties& Data) {
}

void UVSkillsMenuViewModel::SetItems(const TArray<FSkillsMenuItemProperties>& Data) {
}

void UVSkillsMenuViewModel::RegisterSendMultipleClicksDone(int32 NumberOfClicksToEmulate) {
}

void UVSkillsMenuViewModel::RegisterSendMultipleClicksBack(int32 NumberOfClicksToEmulate) {
}

void UVSkillsMenuViewModel::RegisterSendCustomClassName(const FText& NewClassName) {
}

void UVSkillsMenuViewModel::RegisterSendClickedItem(int32 ID) {
}

void UVSkillsMenuViewModel::RegisterSendClickedDone() {
}

void UVSkillsMenuViewModel::RegisterSendClickedBack() {
}

FSkillsMenuProperties UVSkillsMenuViewModel::GetProperties() const {
    return FSkillsMenuProperties{};
}

TArray<FSkillsMenuItemProperties> UVSkillsMenuViewModel::GetItems() const {
    return TArray<FSkillsMenuItemProperties>();
}


