#include "VAnimNotify_ActionMeleeHitWindow.h"

UVAnimNotify_ActionMeleeHitWindow::UVAnimNotify_ActionMeleeHitWindow() {
    this->VerticalDegreeAngleLimit = 90.00f;
    this->HorizontalDegreeAngleLimit = 90.00f;
}

FBox UVAnimNotify_ActionMeleeHitWindow::ComputeHitbox() const {
    return FBox{};
}


