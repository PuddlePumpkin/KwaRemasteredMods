#include "InterpBlendItem.h"

UInterpBlendItem::UInterpBlendItem() {
    this->Interpolator = NULL;
    this->Weight = 0.00f;
    this->NormalizedWeight = 0.00f;
    this->PriorityInt = 0;
    this->PriorityByte = 0;
    this->EaseSpinner = 0.00f;
}


