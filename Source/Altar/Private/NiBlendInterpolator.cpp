#include "NiBlendInterpolator.h"

UNiBlendInterpolator::UNiBlendInterpolator() {
    this->Flags = (InterpBlendFlags)0;
    this->ArraySizeUshort = 0;
    this->ArrayGrowBy = 0;
    this->ArraySizeByte = 0;
    this->WeightThreshold = 0.00f;
    this->InterpCount = 0;
    this->SingleIndex = 0;
    this->HighPriority = 0;
    this->NextHighPriority = 0;
    this->SingleTime = 0.00f;
    this->HighWeightsSum = 0.00f;
    this->NextHighWeightsSum = 0.00f;
    this->HighEaseSpinner = 0.00f;
    this->ManagerControlled = false;
    this->OnlyUseHighestWeight = false;
    this->InterpCountUshort = 0;
    this->SingleIndexUshort = 0;
    this->SingleInterpolator = NULL;
    this->HighPriorityInt = 0;
    this->NextHighPriorityInt = 0;
}


