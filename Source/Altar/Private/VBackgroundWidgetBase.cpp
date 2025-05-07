#include "VBackgroundWidgetBase.h"

UVBackgroundWidgetBase::UVBackgroundWidgetBase() {
    this->Background = NULL;
}

void UVBackgroundWidgetBase::SetBackgroundImage(UTexture2D* Image) {
}

void UVBackgroundWidgetBase::RequestCapture() {
}

void UVBackgroundWidgetBase::ReleaseCamera() {
}

void UVBackgroundWidgetBase::OnScreenShotcapturedDelegate(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData) {
}

FSlateBrush UVBackgroundWidgetBase::GetBackgroundImageBrush() const {
    return FSlateBrush{};
}


