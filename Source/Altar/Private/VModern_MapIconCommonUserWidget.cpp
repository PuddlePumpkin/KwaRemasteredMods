#include "VModern_MapIconCommonUserWidget.h"

UVModern_MapIconCommonUserWidget::UVModern_MapIconCommonUserWidget() {
    this->MapIconSizeBox = NULL;
    this->CurrentIconSize = 0.00f;
    this->IconBaseSize = 48.00f;
    this->ZoomFactorsByLevel.AddDefaulted(5);
    this->StartingZoomLevelOnWorldMap = 2;
    this->StartingZoomLevelOnLocalMap = 4;
    this->StartingZoomFactorOnWorldMapSwitch = 1.00f;
    this->StartingZoomFactorOnWorldMapSetup = 0.70f;
    this->StartingZoomFactorOnLocalMap = 1.00f;
    this->MinIconSizeFactor = 0.40f;
    this->MaxIconSizeFactor = 1.00f;
}

void UVModern_MapIconCommonUserWidget::SetIconStartingSizeOnMapSwitch(const bool bIsWorldMap) {
}

void UVModern_MapIconCommonUserWidget::SetIconStartingSizeOnMapSetup(const bool bIsWorldMap) {
}

void UVModern_MapIconCommonUserWidget::SetIconStartingSizeAccordingToMapType(const bool bIsWorldMap) {
}

void UVModern_MapIconCommonUserWidget::SetIconSizeSmoothlyGivenZoomLevel(const int32 ZoomLevel, const float IconSizeAlpha) {
}

void UVModern_MapIconCommonUserWidget::SetIconSizeGivenZoomLevel(const int32 ZoomLevel) {
}

void UVModern_MapIconCommonUserWidget::SetIconSizeGivenZoomFactor(const float ZoomFactor) {
}

void UVModern_MapIconCommonUserWidget::SetIconSize(const float IconSize) {
}

void UVModern_MapIconCommonUserWidget::SetIconProperties(USizeBox* SizeBox) {
}


