#include "VLegacyEditableText.h"

UVLegacyEditableText::UVLegacyEditableText() {
    this->HintText = FText::FromString(TEXT("{Hint Text}"));
}

void UVLegacyEditableText::SetText(const FText& Value) {
}

void UVLegacyEditableText::SetHintText(const FText& Value) {
}

FText UVLegacyEditableText::GetText() const {
    return FText::GetEmpty();
}

FText UVLegacyEditableText::GetHintText() const {
    return FText::GetEmpty();
}


void UVLegacyEditableText::ClearUserFocus() const {
}

void UVLegacyEditableText::ClearKeyboardFocus() const {
}


