#include "NiFlipController.h"

UNiFlipController::UNiFlipController() {
    this->TextureSlot = ETexType::BASE_MAP;
    this->AccumTime = 0.00f;
    this->Delta = 0.00f;
    this->NumSources = 0;
}


