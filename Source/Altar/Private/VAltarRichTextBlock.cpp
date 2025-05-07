#include "VAltarRichTextBlock.h"

UVAltarRichTextBlock::UVAltarRichTextBlock() {
    this->FontSizeChannel = EVModernRichTextBlockFontSizeChannel::General;
    this->DefaultFontSize = 24;
    this->bApplyFontSizeScaling = true;
    this->LocalLargeScaleDelta = 0;
    this->LocalSmallScaleDelta = 0;
}

void UVAltarRichTextBlock::SetWrappedAt(float NewWrappedAt) {
}

void UVAltarRichTextBlock::SetLineHeightPercentage(float NewLineHeightPercentage) {
}

void UVAltarRichTextBlock::SetFontSize(int32 FontSizeDelta) {
}

void UVAltarRichTextBlock::SetDefaultFontSize(int32 NewFontSize) {
}

void UVAltarRichTextBlock::InitializeRichTextBlock() {
}

void UVAltarRichTextBlock::DeinitializeRichTextBlock() {
}


