#include "NiPixelFormat.h"

UNiPixelFormat::UNiPixelFormat() {
    this->PixelFormatFlags = PixelFormat::FMT_RGB;
    this->RedMask = 0;
    this->GreenMask = 0;
    this->BlueMask = 0;
    this->AlphaMask = 0;
    this->BitsPerPixeluint = 0;
    this->Tiling = PixelTiling::TILE_NONE;
    this->BitsPerPixelbyte = 0;
    this->RendererHint = 0;
    this->ExtraData = 0;
    this->Flags = 0;
    this->sRGBSpace = false;
}


