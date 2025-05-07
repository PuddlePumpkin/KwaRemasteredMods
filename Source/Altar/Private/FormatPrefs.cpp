#include "FormatPrefs.h"

UFormatPrefs::UFormatPrefs() {
    this->PixelLayoutFlag = PixelLayout::LAY_PALETTIZED_8;
    this->UseMipmaps = MipMapFormat::MIP_FMT_NO;
    this->AlphaFormatFlag = AlphaFormat::ALPHA_NONE;
}


