#include "VAltarEditableTextViewModel.h"

UVAltarEditableTextViewModel::UVAltarEditableTextViewModel() {
    this->UserInputTextValidityCode = EUserInputTextValidityCode::Valid;
    this->bShouldCheckIfTextIsEmpty = true;
    this->bShouldCheckForInvalidCharacter = true;
    this->bShouldCheckForWhiteSpaceOnly = true;
    this->bShouldCheckIfTextIsTooLong = true;
    this->MaxTextSize = 32;
}

bool UVAltarEditableTextViewModel::ShouldCheckIfTextIsTooLong() const {
    return false;
}

bool UVAltarEditableTextViewModel::ShouldCheckIfTextIsEmpty() const {
    return false;
}

bool UVAltarEditableTextViewModel::ShouldCheckForWhiteSpaceOnly() const {
    return false;
}

bool UVAltarEditableTextViewModel::ShouldCheckForInvalidCharacter() const {
    return false;
}

void UVAltarEditableTextViewModel::SetValidCharacters(const TArray<FString>& NewValidCharacters) {
}

void UVAltarEditableTextViewModel::SetUserInputTextValidityCode(EUserInputTextValidityCode NewValidityCode) {
}

void UVAltarEditableTextViewModel::SetUserInputTextPair(const FUserInputTextPair& NewUserInputTextPair) {
}

void UVAltarEditableTextViewModel::SetUserInputText(const FText& NewUserInputText) {
}

void UVAltarEditableTextViewModel::SetShouldCheckIfTextIsTooLong(bool NewValue) {
}

void UVAltarEditableTextViewModel::SetShouldCheckIfTextIsEmpty(bool NewValue) {
}

void UVAltarEditableTextViewModel::SetShouldCheckForWhiteSpaceOnly(bool NewValue) {
}

void UVAltarEditableTextViewModel::SetShouldCheckForInvalidCharacter(bool NewValue) {
}

void UVAltarEditableTextViewModel::SetMaxTextSize(int32 NewValue) {
}

TArray<FString> UVAltarEditableTextViewModel::GetValidCharacters() const {
    return TArray<FString>();
}

EUserInputTextValidityCode UVAltarEditableTextViewModel::GetUserInputTextValidityCode() const {
    return EUserInputTextValidityCode::Valid;
}

FUserInputTextPair UVAltarEditableTextViewModel::GetUserInputTextPair() const {
    return FUserInputTextPair{};
}

FText UVAltarEditableTextViewModel::GetUserInputText() const {
    return FText::GetEmpty();
}

int32 UVAltarEditableTextViewModel::GetMaxTextSize() const {
    return 0;
}

void UVAltarEditableTextViewModel::ClearData() {
}


