#include "VGenericInputActionData.h"

FVGenericInputActionData::FVGenericInputActionData() {
    this->InputAction = NULL;
    this->bDisplayInActionBar = false;
    this->KeyEvent = IE_Pressed;
    this->bIsPersistent = false;
}

