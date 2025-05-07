#include "VAltarTextBlock.h"

UVAltarTextBlock::UVAltarTextBlock() {
    this->FontSizeChannel = EVModernTextBlockFontSizeChannel::General;
    this->DefaultFontSize = 24.00f;
    this->bApplyFontSizeScaling = true;
    this->LocalLargeScaleDelta = 0;
    this->LocalSmallScaleDelta = 0;
}

void UVAltarTextBlock::SetFontSize(int32 FontSizeDelta) {
}

void UVAltarTextBlock::SetDefaultFontSize(float NewFontSize) {
}

void UVAltarTextBlock::RefreshFontSizeDelta() {
}

void UVAltarTextBlock::InitializeTextBlock() {
}

void UVAltarTextBlock::DeinitializeTextBlock() {
}


