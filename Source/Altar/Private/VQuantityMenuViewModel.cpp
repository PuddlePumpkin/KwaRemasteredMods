#include "VQuantityMenuViewModel.h"

UVQuantityMenuViewModel::UVQuantityMenuViewModel() {
    this->SelectedValue = -1.00f;
}

void UVQuantityMenuViewModel::SetSelectedValue(float NewSelectedValue) {
}

void UVQuantityMenuViewModel::SetScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties) {
}

void UVQuantityMenuViewModel::RegisterSendClickedOnOkay(float Value) {
}

void UVQuantityMenuViewModel::RegisterSendClickedOnCancel() {
}

float UVQuantityMenuViewModel::GetSelectedValue() const {
    return 0.0f;
}

FLegacyScrollbarValueProperties UVQuantityMenuViewModel::GetScrollbarProperties() const {
    return FLegacyScrollbarValueProperties{};
}


