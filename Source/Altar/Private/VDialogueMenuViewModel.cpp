#include "VDialogueMenuViewModel.h"

UVDialogueMenuViewModel::UVDialogueMenuViewModel() {
    this->bSubtitleVisibility = false;
}

void UVDialogueMenuViewModel::RegisterSendClickedTrainingIcon() {
}

void UVDialogueMenuViewModel::RegisterSendClickedSpellBarterIcon() {
}

void UVDialogueMenuViewModel::RegisterSendClickedSkip() {
}

void UVDialogueMenuViewModel::RegisterSendClickedResponse(int32 ResponseIndex) {
}

void UVDialogueMenuViewModel::RegisterSendClickedRepairingIcon() {
}

void UVDialogueMenuViewModel::RegisterSendClickedRechargingIcon() {
}

void UVDialogueMenuViewModel::RegisterSendClickedPersuasionIcon() {
}

void UVDialogueMenuViewModel::RegisterSendClickedCloseIcon() {
}

void UVDialogueMenuViewModel::RegisterSendClickedBarterIcon() {
}

bool UVDialogueMenuViewModel::IsSubtitleVisible() const {
    return false;
}

bool UVDialogueMenuViewModel::GetSubtitleVisibilityCVarSettings() {
    return false;
}

FText UVDialogueMenuViewModel::GetSubtitle() const {
    return FText::GetEmpty();
}

FText UVDialogueMenuViewModel::GetSpeakerName() const {
    return FText::GetEmpty();
}

TArray<FResponsesData> UVDialogueMenuViewModel::GetResponses() const {
    return TArray<FResponsesData>();
}

FLegacyDialogMenuButtonVisibility UVDialogueMenuViewModel::GetButtonsVisibility() const {
    return FLegacyDialogMenuButtonVisibility{};
}


