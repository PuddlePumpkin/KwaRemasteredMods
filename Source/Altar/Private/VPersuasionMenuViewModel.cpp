#include "VPersuasionMenuViewModel.h"

UVPersuasionMenuViewModel::UVPersuasionMenuViewModel() {
    this->bHasGameStarted = false;
    this->bCanPersuade = false;
    this->bCanRotateWheel = false;
    this->GamePlayState = EPersuasionMiniGamePlayState::CannotPlay;
    this->bCanBribe = false;
    this->PlayerGold = 0;
}

bool UVPersuasionMenuViewModel::WasSpeakerAlreadyPersuaded() const {
    return false;
}

void UVPersuasionMenuViewModel::SetWheelInitializingData(const FWheelInitializingData& NewWheelInitializingData) {
}

void UVPersuasionMenuViewModel::SetPlayerGold(int32 InNewPlayerGold) {
}

void UVPersuasionMenuViewModel::SetNPCName(const FText& NewNpcName) {
}

void UVPersuasionMenuViewModel::SetHasGameStarted(bool bNewValue) {
}

void UVPersuasionMenuViewModel::SetGamePlayState(EPersuasionMiniGamePlayState NewGamePlayState) {
}

void UVPersuasionMenuViewModel::SetDisposition(const FNpcDisposition& NewDisposition) {
}

void UVPersuasionMenuViewModel::SetCanRotateWheel(bool bNewCanRotateWheelValue) {
}

void UVPersuasionMenuViewModel::SetCanPersuade(bool bCanPersuadeNewValue) {
}

void UVPersuasionMenuViewModel::SetCanBribe(bool bNewCanBribeValue) {
}

void UVPersuasionMenuViewModel::SetBribeData(FBribeData NewBirbeData) {
}

void UVPersuasionMenuViewModel::RegisterSendWheelUnHovered() {
}

void UVPersuasionMenuViewModel::RegisterSendQuadrantHovered(EReaction ReactionValue) {
}

void UVPersuasionMenuViewModel::RegisterSendClickOnQuandrant(int32 NewQuadrantClickedID) {
}

void UVPersuasionMenuViewModel::RegisterClickOnStartButton() {
}

void UVPersuasionMenuViewModel::RegisterClickOnRotateButton() {
}

void UVPersuasionMenuViewModel::RegisterClickOnDoneButton() {
}

void UVPersuasionMenuViewModel::RegisterClickOnBribeButton() {
}

FWheelInitializingData UVPersuasionMenuViewModel::GetWheelInitializingData() const {
    return FWheelInitializingData{};
}

int32 UVPersuasionMenuViewModel::GetPlayerGold() const {
    return 0;
}

FText UVPersuasionMenuViewModel::GetNPCName() const {
    return FText::GetEmpty();
}

EPersuasionMiniGamePlayState UVPersuasionMenuViewModel::GetGamePlayState() const {
    return EPersuasionMiniGamePlayState::CanPlay;
}

FNpcDisposition UVPersuasionMenuViewModel::GetDisposition() const {
    return FNpcDisposition{};
}

FBribeData UVPersuasionMenuViewModel::GetBribeData() const {
    return FBribeData{};
}

bool UVPersuasionMenuViewModel::GameHasStarted() const {
    return false;
}

bool UVPersuasionMenuViewModel::CanRotateWheel() const {
    return false;
}

bool UVPersuasionMenuViewModel::CanPersuade() const {
    return false;
}

bool UVPersuasionMenuViewModel::CanBribe() const {
    return false;
}

void UVPersuasionMenuViewModel::AddToPersuadedCharacters() {
}


