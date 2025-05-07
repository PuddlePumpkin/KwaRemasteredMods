#include "NiStencilProperty.h"

UNiStencilProperty::UNiStencilProperty() {
    this->Flags = 0;
    this->StencilEnabled = 0;
    this->StencilFunction = StencilTestFunc::TEST_NEVER;
    this->StencilRef = 0;
    this->StencilMask = 0;
    this->FailAction = StencilAction::ACTION_KEEP;
    this->ZFailAction = StencilAction::ACTION_KEEP;
    this->PassAction = StencilAction::ACTION_KEEP;
    this->DrawMode = StencilDrawMode::DRAW_CCW_OR_BOTH;
}


