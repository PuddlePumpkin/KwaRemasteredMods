#include "NiSourceTexture.h"

UNiSourceTexture::UNiSourceTexture() {
    this->UseExternal = 0;
    this->UseInternal = 0;
    this->PixelData = NULL;
    this->FormatPrefs = NULL;
    this->IsStatic = 0;
    this->DirectRender = false;
    this->PersistRenderData = false;
}


