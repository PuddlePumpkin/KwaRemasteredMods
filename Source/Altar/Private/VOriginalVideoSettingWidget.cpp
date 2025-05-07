#include "VOriginalVideoSettingWidget.h"

UVOriginalVideoSettingWidget::UVOriginalVideoSettingWidget() {
}

void UVOriginalVideoSettingWidget::SetOptions(const TArray<FOriginalVideoOption>& Value) {
}

void UVOriginalVideoSettingWidget::SetLabel(const FText& Value) {
}

void UVOriginalVideoSettingWidget::SetExtremalValue(const FFloatInterval& Value) {
}


TArray<FOriginalVideoOption> UVOriginalVideoSettingWidget::GetOptions() const {
    return TArray<FOriginalVideoOption>();
}

FText UVOriginalVideoSettingWidget::GetLabel() const {
    return FText::GetEmpty();
}

FFloatInterval UVOriginalVideoSettingWidget::GetExtremalValue() const {
    return FFloatInterval{};
}


