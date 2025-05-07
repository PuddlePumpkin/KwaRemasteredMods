#include "TexDesc.h"

UTexDesc::UTexDesc() {
    this->Image = NULL;
    this->Source = NULL;
    this->ClampMode = TexClampMode::CLAMP_S_CLAMP_T;
    this->FilterMode = TexFilterMode::FILTER_NEAREST;
    this->MaxAnisotropy = 0;
    this->UVSet = 0;
    this->PS2L = 0;
    this->PS2K = 0;
    this->HasTextureTransform = false;
    this->Rotation = 0.00f;
    this->TransformMethodFlag = TransformMethod::Maya_Deprecated;
}


