#include "NiTextureTransformController.h"

UNiTextureTransformController::UNiTextureTransformController() {
    this->ShaderMap = false;
    this->TextureSlot = ETexType::BASE_MAP;
    this->Operation = ETransformMember::TT_TRANSLATE_U;
    this->Data = NULL;
}


