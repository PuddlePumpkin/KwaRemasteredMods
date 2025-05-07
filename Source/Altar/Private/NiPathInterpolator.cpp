#include "NiPathInterpolator.h"

UNiPathInterpolator::UNiPathInterpolator() {
    this->Flags = (EPathFlags)0;
    this->BankDir = 0;
    this->MaxBankAngle = 0.00f;
    this->Smoothing = 0.00f;
    this->FollowAxis = 0;
    this->PathData = NULL;
    this->PercentData = NULL;
}


