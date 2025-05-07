#include "VSpecialIdleAndDockCharacterAnimInstance.h"

UVSpecialIdleAndDockCharacterAnimInstance::UVSpecialIdleAndDockCharacterAnimInstance() {
    this->bIsDocked = false;
    this->bHasSpecialIdleWhileDocked = false;
    this->bIsLayerActive = false;
    this->bIsHoldingTorch = false;
    this->DockedAnim = NULL;
    this->CurrentSpecialIdleMontage = NULL;
}


