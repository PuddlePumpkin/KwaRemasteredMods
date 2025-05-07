#include "VModernQuickKeysMenu.h"

UVModernQuickKeysMenu::UVModernQuickKeysMenu() {
    this->NumberOfQuickKeys = 8;
}

void UVModernQuickKeysMenu::UpdateIcons(const TArray<UTexture2D*>& NewArray) {
}



int32 UVModernQuickKeysMenu::ComputeKeyIDWithCenterToCursor(const FVector2D& CenterToCursor) {
    return 0;
}

int32 UVModernQuickKeysMenu::ComputeKeyIDOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) {
    return 0;
}


