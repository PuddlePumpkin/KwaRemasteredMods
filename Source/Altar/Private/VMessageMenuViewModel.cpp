#include "VMessageMenuViewModel.h"

UVMessageMenuViewModel::UVMessageMenuViewModel() {
    this->MenuType = EModalMenuLayoutType::Default;
}

void UVMessageMenuViewModel::SetMessage(const FText& NewMessage) {
}

void UVMessageMenuViewModel::SetMenuType(EModalMenuLayoutType NewMenuType) {
}

void UVMessageMenuViewModel::SetButtonsText(const TArray<FText>& NewButtonsText) {
}

void UVMessageMenuViewModel::RegisterSendClickedButton(int32 InButtonIndex) {
}

FText UVMessageMenuViewModel::GetMessage() const {
    return FText::GetEmpty();
}

EModalMenuLayoutType UVMessageMenuViewModel::GetMenuType() const {
    return EModalMenuLayoutType::Default;
}

TArray<FText> UVMessageMenuViewModel::GetButtonsText() const {
    return TArray<FText>();
}


