#include "VNavigableEditableText.h"

UVNavigableEditableText::UVNavigableEditableText() {
    this->EditableText = NULL;
}

void UVNavigableEditableText::UnBindEditableTextDelegates() {
}

void UVNavigableEditableText::HandleOnValueCommitted(const FText& CommittedValue, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UVNavigableEditableText::HandleOnValueChanged(const FText& Text) {
}

bool UVNavigableEditableText::GetIsEditing() const {
    return false;
}

UEditableText* UVNavigableEditableText::GetEditableText() const {
    return NULL;
}

void UVNavigableEditableText::BindEditableTextDelegates() {
}


