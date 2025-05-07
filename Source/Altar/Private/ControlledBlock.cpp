#include "ControlledBlock.h"

UControlledBlock::UControlledBlock() {
    this->Interpolator = NULL;
    this->Controller = NULL;
    this->BlendInterpolator = NULL;
    this->BlendIndex = 0;
    this->Priority = 0;
    this->StringPalette = NULL;
    this->NodeNameOffset = 0;
    this->PropertyTypeOffset = 0;
    this->ControllerTypeOffset = 0;
    this->ControllerIDOffset = 0;
    this->InterpolatorIDOffset = 0;
}


