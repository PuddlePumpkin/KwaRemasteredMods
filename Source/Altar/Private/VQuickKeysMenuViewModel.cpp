#include "VQuickKeysMenuViewModel.h"

UVQuickKeysMenuViewModel::UVQuickKeysMenuViewModel() {
    this->KeyIndex = 0;
}

void UVQuickKeysMenuViewModel::SetMessage(const FText& NewMessage) {
}

void UVQuickKeysMenuViewModel::SetKeyIndex(int32 NewKeyIndex) {
}

void UVQuickKeysMenuViewModel::SetIcons(const TArray<UTexture2D*>& NewIcons) {
}

void UVQuickKeysMenuViewModel::RegisterSendSelectedQuickKey(int32 KeyID) {
}

void UVQuickKeysMenuViewModel::RegisterSendOpen() {
}

void UVQuickKeysMenuViewModel::RegisterSendForceMouseInputByAltar(bool bNewForceMouseInputByAltar) {
}

void UVQuickKeysMenuViewModel::RegisterSendClose() {
}

FText UVQuickKeysMenuViewModel::GetMessage() const {
    return FText::GetEmpty();
}

int32 UVQuickKeysMenuViewModel::GetKeyIndex() const {
    return 0;
}

TArray<UTexture2D*> UVQuickKeysMenuViewModel::GetIcons() const {
    return TArray<UTexture2D*>();
}


